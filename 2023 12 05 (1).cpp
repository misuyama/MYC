﻿// 2023 12 05 (1).cpp :

// 13. 11 함수 객체를 사용해 바꿔본 예제 


#include <iostream>

using namespace std;
struct Func {
	virtual int operator() (int n) const = 0;
};
struct Square : Func {
	int operator() (int n) const { return n * n; }
};

struct MyFunc : Func {
	int operator() (int n) const { return n * (n - 15) / 2; }
};

int arrFnMin(const int arr[], int n, const Func& f) {
	int min = f(arr[0]);
	for (int i = 1; i < n; i++) {
		if (min > f(arr[i])) min = f(arr[i]);
	}
	return min;
}
int main()
{
	int arr[7] = { 3 , 1, 5 , -5, 2, 10, -2 };

	Square square;
	MyFunc myFunc;
	cout << arrFnMin(arr, 7, square) << endl;
	cout << arrFnMin(arr, 7, myFunc) << endl;


}

