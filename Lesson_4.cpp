#include <iostream>
using namespace std;
Managing Arrays and Strings

An array is a collection of elements
All elements contained in an array are of the same kind. 

Declaring 
int FirstNumber = 0;
int SecondNumber = 0;
int ThirdNumber = 0;
int FourthNumber = 0;
int FifthNumber = 0;

translates to ...

int MyNumbers [5] = {0};

... an array of five characters would be defined as :
char MyCharacters [5];

Static arrays : the number of elements the contain as well as the memory the array consumes is fixed at the time of compilation

Declaring and Initializing Static Arrays
Syntax:
element-type array-name [number of elements] = {optional initial values};

You can initialize all elements to the same value ..
int MyNumbers [5] = {100}; // initialize all integers to 100
int MyNumbers [5] = {34, 56}; // initialize first two elements

You can define the length of an array (that is, the number of elements in one) as a constant and use that constant in your array definition: const int ARRAY_LENGTH = 5; int MyNumbers [ARRAY_LENGTH] = {34, 56, -21, 5002, 365};

When partially initializing arrays, it is possible that certain compilers initialize those elements ignored by you to an initial value 0.
You can also partially initialize elements in an array, like this:
int MyNumbers [5] = {34, 56}; // initialize first two elements

You can opt to leave out the number of elements in an array if you know the initial values of the elements in the array:
int MyNumbers [] = {2011, 2052, -525}

Accessing an array beyond its bounds results in unpredictable behavior. In many cases this causes your program to crash. Accessing arrays beyond their bounds should be avoided at all costs.


#include <iostream>

using namespace std;

int main ()
{
	int myNumbers [] = {34, 56, -21, 5002, 365};

	cout << "First element at index 0 :" << myNumbers[0] << endl;
	cout << "Second element at index 1 :" << myNumbers[1] << endl;
	cout << "Third element at index 2 :" << myNumbers[2] << endl;
	cout << "Fourth element at index 3 :" << myNumbers[3] << endl;
	cout << "Fifth element at index 4 :" << myNumbers[4] << endl;

	return 0;
}

Assigning values...
MyNumbers[3] = 2011; // Assign 2011 to the fourth element


Assigning Values to Elements in an Array :

#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;

	// Array of 5 integers, initialized to zero 
	int MyNumbers [ARRAY_LENGTH] = {0};

	cout << "Enter index of the element to be changed: ";
	int nElementIndex = 0;
	cin >> nElementIndex;

	cout << "Enter new value: ";
	cin >> MyNumbers[nElementIndex];

	cout << "First element at index 0 :" << myNumbers[0] << endl;
	cout << "Second element at index 1 :" << myNumbers[1] << endl;
	cout << "Third element at index 2 :" << myNumbers[2] << endl;
	cout << "Fourth element at index 3 :" << myNumbers[3] << endl;
	cout << "Fifth element at index 4 :" << myNumbers[4] << endl;

	return 0;
}


Many novice C++ programmers assign the fifth value at index five in an array of five integers. Note that this exceeds the bound of the array as the compiled code tries accessing the sixth element in the array which is beyond its defined bounds. This kind of error is called a fence-post error. It’s named after the fact that the number of posts needed to build a fence is always one more than the number of sections in the fence.

Declaring and Initializing Multidimensional Arrays 
int SolarPanelIDs [2][3];
2 represents the number of rows 
3 represents the number of columns

int SolarPanelIDs [2][3] = {{0, 1, 2}, {3, 4, 5}};
or 
int SolarPanelIDs [2][3] = {0, 1, 2, 3, 4, 5};

Note: This is because the memory where the array is stored
is always going to be one dimensional . 

Accessing elements in a Multidimensional Array

#include <iostream>
using namespace std;

int main()
{
	int ThreeRowsThreeColumns[3][3] = \
	{{-501, 206, 2011}, {989, 101, 206}, {303, 456, 596}};

	cout << "Row 0: " << ThreeRowsThreeColumns[0][0] << ' ' \
					  << ThreeRowsThreeColumns[0][1] << ' ' \
					  << ThreeRowsThreeColumns[0][2] << endl;

	cout << "Row 1: " << ThreeRowsThreeColumns[1][0] << ' ' \
					  << ThreeRowsThreeColumns[1][1] << ' ' \
					  << ThreeRowsThreeColumns[1][2] << endl;

	cout << "Row 2: " << ThreeRowsThreeColumns[2][0] << ' ' \
	  				  << ThreeRowsThreeColumns[2][1] << ' ' \
	  				  << ThreeRowsThreeColumns[2][2] << endl;
	return 0;
} 

This code is actually unsustainable in a professional development environment. 
use a nested for loop to access all elements in such an array.
Using for loops is actually shorter and less error prone, 
and the length of the program is not affected
by changing the number of elements in the array. 

Dynamic Arrays :
If you do not know the upper limits of your array.
Optimize memory consumption and scale up depending on demand
for resources and memory at exectution-time.
	std::vector 
.
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> DynArrNums (3);

	DynArrNums[0] = 365;
	DynArrNums[1] = -421;
	DynArrNums[2] = 789;

	 cout << “Number of integers in array: “ << DynArrNums.size() << endl;
	 cout << “Enter another number for the array” << endl; 
	 int AnotherNum = 0; 
	 cin >> AnotherNum; 
	 DynArrNums.push_back(AnotherNum);
	 cout << “Number of integers in array: “ << DynArrNums.size() << endl; 
	 cout << “Last element in array: “; 
	 cout << DynArrNums[DynArrNums.size() - 1] << endl; 
	 return 0; 
}
