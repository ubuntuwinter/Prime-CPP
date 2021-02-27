// Screen.h
#include "main.h"
#include "Screen.h"
ustd

inline // �����ں������崦ָ��inline
Screen& Screen::move(pos r, pos c) { 
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const { // ������ڲ�������inline
	pos row = r * width; 
	return contents[row + c];
}

inline Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}