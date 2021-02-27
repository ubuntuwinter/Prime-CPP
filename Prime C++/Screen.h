// Screen.h
#pragma once
#ifndef __SCREEN_H__
#define __SCREEN_H__
#include <string>
#include <iostream>

class Screen {
public:
	typedef std::string::size_type pos; // using pos = std::string::size_type
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd)
		, contents(ht* wd, c) {}
	char get() const { return contents[cursor]; } // 隐式内联（定义在类内部的成员函数自动内联）
	inline char get(pos ht, pos wd) const; // 显式内联
	Screen& move(pos r, pos c); // 能在之后被设为内联，可以在函数定义处指定inline
	Screen& set(char);
	Screen& set(pos, pos, char);
	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}
	const Screen& display(std::ostream& os) const {
		do_display(os);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr = 0; // 即使在一个const对象内也能被修改
	void do_display(std::ostream& os) const { os << contents; }
};

#endif // !__SCREEN_H__

