// 9_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


template <class T> //定义函数模板
void outputArray(const T *array, int count) {
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
	int a[A_COUNT] = { 1,2,3,4,5,6,7,8 };
	double b[B_COUNT] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };
	char c[C_COUNT] = "Welcome!";

	cout << "a array contains:" << endl;
	outputArray(a, A_COUNT);

	cout << "b array contains:" << endl;
	outputArray(b, B_COUNT);

	cout << "c array contains:" << endl;
	outputArray(c, C_COUNT);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
