// 6_3_2.cpp
#include "main.h"
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
ustd

vector<string> process(const string& expected, const string& actual) {
	if (expected.empty()) {
		return {};
	}
	else if (expected == actual) {
		return { "functionX","okey" };
	}
	else {
		return { "functionX",expected,actual };
	}
}

int main_6_3_2() {
	string expected = "A", actual = "A";
	auto&& result = process(expected, actual);
	copy(result.begin(), result.end(), ostream_iterator<string>(cout, "\n"));
	return EXIT_SUCCESS;
}