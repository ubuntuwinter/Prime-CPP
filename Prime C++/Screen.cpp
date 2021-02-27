// Screen.h
#include "main.h"
#include "Screen.h"
ustd

inline // 可以在函数定义处指定inline
Screen& Screen::move(pos r, pos c) { 
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const { // 在类的内部声明成inline
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