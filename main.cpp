/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description: This is a program used to demo structure padding
 *              in a C structure 
 *
 * Revision History:
 * Initial version: Oct 13th, 2020
 */

#include<cstdio>
#include<iostream>

#include<string>
//#pragma pack(1)

// Charan & Vamsi need to explain what this is
using namespace std;

typedef struct demo_sizestruct1
{
	double a;
	int b;
	char c;
	char d;
};

typedef struct demo_sizestruct2
{
	char c;
	int b;
	double a;
};

typedef struct demo_sizestruct3
{
	double a;
	char c;
	int b;
	char d;
};

typedef struct demo_sizestruct4
{
	double a;
	char c;
	int b;
	char d;
	int e;
};

typedef struct demo_sizestruct5
{
	double a;
	char c;
	int b;
	char d;
	int e;
	double f;
};

/*****************************************************/
// Function:     demo_structsize()
// Description:  This function demos the various sizes
//               a structure varible occupies
// Inputs:       None
// Return value: None
/*****************************************************/
void demo_structsize()
{
	demo_sizestruct1 d1;
	demo_sizestruct2 d2;
	demo_sizestruct3 d3;
	demo_sizestruct4 d4;
	demo_sizestruct5 d5;
	cout << "sizeof(double):" << sizeof(double) << " " << "sizeof(int): " << sizeof(int) << " ";
    cout << "sizeof(float):"  << sizeof(float) << " " << "sizeof(char): " << sizeof(char) << " " << endl;
	cout << "Sizeof struct1 (double, int, char, char): " << sizeof(d1) << endl;
	cout << "Sizeof struct2 (char, int, double): " << sizeof(d2) << endl;
	cout << "Sizeof struct3 (double, char, int, char): " << sizeof(d3) << endl;
	cout << "Sizeof struct4 (double, char, int, char, int): " << sizeof(d4) << endl;
	cout << "Sizeof struct5 (double, char, int, char, int, double): " << sizeof(d5) << endl;
}

/*****************************************************/
// Function:     main()
// Description:  This is the main() function for entry
//               into program execution
// Inputs:       None
// Return value: None
/*****************************************************/
void main()
{
	demo_structsize();

	while(1);
}
