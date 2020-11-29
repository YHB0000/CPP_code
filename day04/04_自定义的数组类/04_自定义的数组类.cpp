﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
	MyArray arr1(10);
	for (int i = 0; i < arr1.getLen(); i++)
	{
		arr1.setData(i, i + 10);
	}
	for (int i = 0; i < arr1.getLen(); i++)
	{
		cout << arr1.getData(i) << " ";
	}
	cout << endl;

	MyArray arr2;
	arr2 = arr1;

	for (int i = 0; i < arr2.getLen(); i++)
	{
		cout << arr2.getData(i) << " ";
	}

}