// Learning C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
	int myNum = 15; // myNum is 15
	myNum = 10; // Now myNum is 10
	cout << myNum << endl; // Outputs 10


	//FLOAT Expressions
	float v1 = 8.9;		//Var init
	float v2 = 5.6;		//Var init
	float v3;			//Var declaration
	v3 = v1 + v2;
	cout << "Value of v3 : " << v3 << endl;		//display v3 value
	cout << "\n";

	//float 2
	float z1 = 6.7;
	float z2;
	z2 = z1 + float(10);
	cout << "Value of z2 is : " << z2 << endl;

	//POINTER exp : &x, ptr, ptr++, ptr--


	/*				C++	KeyWords (also) available in C language
	Auto	| Break  | case		| char	 | const	| continue | default  | do
	double	| else	 | enum		| extern | float	| for	   | goto	  | if
	int		| long	 | register | return | short	| signed   | sizeof	  | static
	struct	| switch | typedef  | union	 | unsigned | void	   | volatile | while
	
	===============================C++ KeyWords====================================

		C++	KeyWords wich (are not) available in C language
	asm		 | dynamic_cast | namespace	  | reinterpret_cast | bool
	explicit | new			| static_cast | false			 | catch
	operator | template		| friend	  | private			 | class
	this	 | inline		| public	  | throw			 | const_cast
	delete	 | mutable		| protected	  | true			 | try
	typeid	 | typename		| using		  | virtual			 | wchar_t
	*/

	int Mynum = 5;
	double myfloatnum = 5.99;
	char myLetter = 'Q';
	string myText = "\nHiii ;)\n";
	bool myBoolean = true;
	string myText2 = "Fuck off !\n";
	
	cout << myfloatnum;
	cout << myText << endl;
	cout << Mynum << endl;
	cout << myText2;

	/*			Binary Operator
	Arithmetic Operator : +  |  -   |  *   |  /   |  %  
	Relational			: <	 |  <=  |  >   |  >=  |  ==  |  !=  
	Logical				: && |  ||  |  !   |
	BitWise				: &  |  |   |  <<  |  >>  |  ~   |  ^
	Assignment			: =  |  +=	|  -=  |  *=  |  /=  |  &=
	
	  Unary Operator
	Unary	: ++  | --
	
				Ternary Operator
	Ternary or Conditional Operator	: [ ?: ]
	*/

	int x = 5, b = 10;
	cout << x << endl;
	cout << b << endl;
	cout << myText2;

	float f = 17.8;
	cout << f << endl;
	cout << myText2;

	/*Data types in C++ 
	- Basic			: int, char, float, double, etc
	- Derived		: array, pointer, etc
	- Enumeration	: enum
	- User Defined	: structure
	*/

	//IDENTIFIERS concept
	int a;
	int A;
	cout << "Enter the values of 'a' and 'A'";
	cin >> a;
	cin >> A;
	cout << "\nThe values that you have entered are : " << a << "," << A;
	cout << "\n" << endl;
	
	int o; //Variable declaration
	o = (3 / 2) + 2; //Constant Expression
	cout << "Value of x is : " << o << endl; //Displaying the value of x.
	cout << "\n";


	// simple Integral expression
	int m1;
	int m2;
	int m3;
	cout << "Enter the values of x and y";
	cin >> m1 >> m2;
	m3 = m1 + m2;
	cout << "\n" << "Value of z is : " << m3 << endl; //Displaying the value of z
	cout << "\n";

	//another integral expression
	int x1;	//Variable declaration
	int x2 = 9;	//Variable initialization
	x1 = x2 + int(10.0);	//Integral expression
	cout << "Value of x1 : " << x1;	//displaying the value of x.
	cout << "\n";

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
