// 6_7.cpp
#include "main.h"
#include <string>
ustd

bool lengthCompare(const string&, const string&) {
	return true;
}

void ff(int*);
void ff(unsigned int);

typedef bool Func(const string&, const string&);
typedef decltype(lengthCompare) Func2;

typedef bool (*FuncP)(const string&, const string&);
typedef decltype(lengthCompare)* FuncP2;

void useBigger(const string&, const string&, Func);
// void useBigger(const string&, const string&, FuncP2); // ������һ���������Զ�ת��Ϊָ��

using F = int(int*, int);
using PF = int(*)(int*, int);
auto f1(int) -> int(*)(int*, int);

int main_6_7() {
	bool (*pf)(const string&, const string&);
	pf = lengthCompare;
	bool b1 = pf("hello", "goodbye");
	pf = nullptr;
	// void (*pf1)(unsigned int) = ff; // �Ҳ�����ַ������ʧ��
	
	Func *pp = lengthCompare;

	return 0;
}