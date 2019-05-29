// Password_List_Generater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string a = "aaaaaaaa";
int aaa;

int main()
{
	std::cin >> aaa;
	for (int i = 7; i != -1; i--)
	{
		while (a[i] != '9')
		{
			std::cout << a + "\n";
			a[i] = a[i] + 1;
			std::cout << a + "\n";
			

		}	
		while (a[i + 1] != '9')
		{
			std::cout << a + "\n";
			a[i - 1] = a[i - 1] + 1;
			std::cout << a + "\n";
		
		}
		while (a[i + 2] != '9')
		{
			std::cout << a + "\n";
			a[i - 2] = a[i - 2] + 1;
			std::cout << a + "\n";
		}
		while (a[i + 3] != '9')
		{
			std::cout << a + "\n";
			a[i - 3] = a[i - 3] + 1;
			std::cout << a + "\n";
		}
		while (a[i + 4] != '9')
		{
			std::cout << a + "\n";
			a[i - 4] = a[i - 4] + 1;
			std::cout << a + "\n";
		}
		while (a[i + 5] != '9')
		{
			std::cout << a + "\n";
			a[i - 5] = a[i - 5] + 1;
			std::cout << a + "\n";
		}
		while (a[i + 6] != '9')
		{
			std::cout << a + "\n";
			a[i - 6] = a[i - 6] + 1;
			std::cout << a + "\n";
		}


		//while (a[i - 7] != '9')
		//{
		//	std::cout << a + "\n";
		//	a[i - 7] = a[i - 7] + 1;
		//	std::cout << a + "\n";
		//}


		std::cout << "Hello World!\n";
	}
	
}

