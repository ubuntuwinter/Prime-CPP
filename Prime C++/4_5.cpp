// 4_5.cpp
#include "main.h"
#include <iostream>
ustd

int main_4_5() {
	int i = 0;
	++i = 5; // 返回左值
	// i++ = 5; // 返回右值
	// ++i++; // 后置++优先级更高
	(++i)++;
	cout << i << endl;
	return 0;
}