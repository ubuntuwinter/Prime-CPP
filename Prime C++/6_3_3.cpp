// 6_3_3.cpp
#include "main.h"

int arr[10];
int* p1[10]; // 10��ָ�������
int(*p2)[10] = &arr; // ָ��10�������������ָ��

using arrT = int[10]; // typedef int arrT[10];
arrT* func1(int i) {
	return &arr;
}

int(*func2(int i))[10]{
	return &arr;
}

auto func3(int i) -> int(*)[10]{
	return &arr;
}

decltype(arr)* func4(int i) {
	return &arr;
}