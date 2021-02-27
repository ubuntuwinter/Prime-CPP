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
	char get() const { return contents[cursor]; } // ��ʽ���������������ڲ��ĳ�Ա�����Զ�������
	inline char get(pos ht, pos wd) const; // ��ʽ����
	Screen& move(pos r, pos c); // ����֮����Ϊ�����������ں������崦ָ��inline
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
	mutable size_t access_ctr = 0; // ��ʹ��һ��const������Ҳ�ܱ��޸�
	void do_display(std::ostream& os) const { os << contents; }
};

#endif // !__SCREEN_H__

