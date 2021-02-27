// Sales_data.h
#pragma once
#ifndef __SALES_DATA_H__
#define __SALES_DATA_H__
#include "main.h"
#include <string>
#include <iostream>

class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
public:
	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const {
		return units_sold ? revenue / units_sold : 0;
	}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// 除了友元声明之外，应该再专门对这些函数进行一次独立声明
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& print(std::istream&, Sales_data&);

#endif // !__SALES_DATA_H__