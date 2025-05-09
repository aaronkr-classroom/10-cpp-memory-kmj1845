// pointer.cpp
#include <iostream>

using namespace std;

int main() {
	int x = 5;

	// p는 x를 가리켜
	int* p = &x;
	cout << "x = " << x << endl; // 값
	cout << "&x = " << &x << endl; // 메모리 주소
	cout << "p = " << p << endl; // 메모리 주소
	cout << "*p = " << *p << endl; // 값

	// p를 이용해 x 값을 변경
	*p = 10;
	cout << "x = " << x << endl; // 값
	cout << "&x = " << &x << endl; // 메모리 주소
	cout << "p = " << p << endl; // 메모리 주소
	cout << "*p = " << *p << endl; // 값

	return 0;
}