#include <iostream>

Lesson 3 
Using Variables,
Declaring Constants

Variables are tools that help temporarily store data
Constants are tools that help define artifacts that are not allowed to change.

When programming in C++ , you define variables to store values 
to avoid overwriting existing data due to memory mis management 

Defining a variable :
variable_type variable_name;
or 
variable_type variable_name = initial value;
The variable type tells the compiler the nature of data the variable can store,
and compiler reserves the necessary space for it.
It is good programming practice to initizialize the value

#include <iostream>
using namespace std;

int main()
{
	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter the first number:";
	int FirstNumber = 0;
	cin >> FirstNumber;

	cout << "Enter the second number:";
	int SecondNumber = 0;
	cin >> SecondNumber;

	//Multiply two numbers, store result in a variable
	int MultiplicationResult = FirstNumber * SecondNumber;

	//Display result
	cout << FirstNumber << ' x ' << SecondNumber;
	cout << ' = ' << MultiplicationResult << endl;

	return 0;
}

Declaring and Initializing Multiple Variables of a type
FirstNumber,SecondNumber,and MultiplicationResult are all the same type
and declared in three seperate lines.

int FirstNumber = 0, SecondNumber = 0, MultiplicationResult = 0;

Data stored in variables is data stored in RAM
it is lost after shut down or termination of the application
unless explicitly stored on another medium such as hard disk.

Understanding Scope of a Variable 
#include <iostream> 
using namespace std;

void MultiplyNUmbers ()
{
	cout << 'Enter the first number: ';
	int FirstNumber = 0;
	cin >> FirstNumber;

	cout << 'Enter the second number:';
	int SecondNumber = 0;
	cin >> SecondNumber;

	int MultiplicationResult = FirstNumber * SecondNumber;

	cout << FirstNumber << ' x ' << SecondNumber;
	cout << ' = ' << MultiplicationResult << endl;
}
int main ()
{
	cout << "This program will help you multiply two numbers" <<endl;

	//Call the function that does all the work
	MultiplyNUmbers();
	// cout << FirstNumber << " x " << SecondNumber;
	//cout << ' = ' << MultiplicationResult << endl;

	return 0;
}

The variables can only be called within the function MultiplyNUmbers
so there scope is confined to that function , 
otherwise the program would fail. 

FirstNumber and SecondNumber have a local scope and 
are limited to the function they are declared in.
A local variable can be used in a function after its declaration
until the end of the function . 
The curly brace indicates the end of a function
When a function ends all local variables are destroyed and 
the memory they occupied returned so even if you declare another set of
variables with the same name in the main method 
they will not carry a value that might have been assigned in the function MultiplyNUmbers

Global Variables : variables with the widest scope

#include <iostream>
using namespace std;

// three global integers
int FirstNumber = 0;
int SecondNumber = 0;
int MultiplicationResult = 0;

void MultiplyNUmbers ()
{
	cout << 'Enter the first number';
	cin >> FirstNumber;

	cout << "Enter the second number";
	cin >> SecondNumber;

	//Multiply two  numbers then store result
	MultiplicationResult = FirstNumber * SecondNumber;

	//Display result
	cout << "Displaying from MultiplyNUmbers():" ;
	cout << FirstNumber << " x " << SecondNumber;
	cout << " = " << MultiplicationResult << endl;
}
int main() 
{
	cout << 'This program will help you multiply two numbers' << endl;

	// Call the function
	MultiplyNUmbers();

	cout << 'Displaying from main():' ;

	//This line will now complile and work!
	cout << FirstNumber << " x " << SecondNumber;
	cout << ' = ' << MultiplicationResult << endl;

	return 0;
}

Variable types
bool : true or false
char 256 character values
unsigned short int 0 to 65,535
short int -32,768 to 32,767
unsigned long int 0 to 4,294,967,295 
long int –2,147,483,648 to 2,147,483,647 
unsigned long long 0 to 18,446,744,073,709,551,615 
long long –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 
int (16 bit)nt data type –32,768 to 32,767 
int (32 bit)nt data type –2,147,483,648 to 2,147,483,647 
unsigned int (16 bit) 0 to 65,535 
unsigned int (32 bit) 0 to 4,294,967,295 
float 1.2e–38 to 3.4e38 
double 2.2e–308 to 1.8e308

Using type bool to Store Boolean values:
//declaration of an initialized boolean variable
bool AlwaysOnTop = false;
//boolean expression
bool DeleteFile = (UserSelection =="yes");
//evaluates to true only if UserSelection contains 'yes', else to false

 Use type char to store a single character, 

 Signed and Unsigned integers
 Sign implies positive or negative
 unsigned cannot be negative 

 *You would use an unsigned variable type when you expect only positive values.
 You can hold twice as many values 

 However, for a banking application do not use unsigned type

 float is used to store the value less precisely
 float Pi = 3.14;
 double precision float is defined as
 double MorePrecisePi = 22/7;

 Determining the size ofa Variable using 
 sizeof:tells size in bytes of a variable or a type

C++ 11
Using auto, the Compiler's Type Inference Capabilities

Declaring a Dynamic array of integers in the form of std::vector, called MyNumbers:'
std::vector<int> MyNumbers; 
You can access or iterate elements in the array and dispay them using:
for (vector<int>::const_iterator Iterator = MyNumbers.begin();
	Iterator < MyNumbers.end();
	++Iterator )
	cout << *Iterator << '';

can be simplified to:
for( auto Iterator = MyNumbers.begin();
Iterator < MyNumbers.end();
++Iterator )
	cout << *Iterator << '';

You can also substitute variable types
typedef allows you to define a new name 
to a variable type:

typedef unsigned int STRICTLY_POSITIVE_INTEGER;
STRICTLY_POSITIVE_INTEGER PosNumber = 4532;

When compiled the first line tesll the compiler that a 
STRICTLY_POSITIVE_INTEGER is nothing but an unsigned int. 


What Is a Constant?
const type-name constant-name;
#include <iostream>

int main()
{
	using namespace std;

	const double Pi = 22.0/7;
	cout << "The value of constant Pi is: " << Pi << endl;

	//Uncomment next line to fail compilation
	//Pi = 345;

	return 0;
}

C++11
Declaring constants using constexpr
Defining functions that can be evaluated at compile time.
constexpr double GetPi() {return 22.0/7;}
or used with another constant 
constexpr double TwicePi() {return 2 * GetPi();}


Enumerated Constants 
Can only take a certain set of values.

enum RainbowColors
{
	Violet = 0,
	Indigo,
	Blue,
	Green,
	Yellow,
	Orange,
	Red
};

enum CardinalDirections 
{
	North, //0
	South, //1
	East, //2
	West //3
};

enumerated constants can now be used as variable types.

Defining constants using the preprocessor via #define is deprecated 
and should not be used.

Naming  Variables and Constants
Hungarian Notation : adding a prefix to the variable to indicate the variable type
bool bIsLampOn = false;
Not recommended!

QA

What is the difference between a signed and unsigned integer?
A signed integer can contain both positive and negative values
while an unsigned integer only contains positive values

Why should you not use #define to decalre a constant?
You should use enumerated values instead
#define has been looked down upon

Why would you initialize a variable?
So that you reserve space in the memory for the variable

Consider the enum below. What is the value of QUEEN?
enum YOURCARDS {ACE, JACK, QUEEN, KING};
QUEEN = 2;

What is wrong with this variable name?
int Integer = 0;
Integer is a reserved variable name and will not compile.

1. Modify enum YOURCARDS to demonstrate the value of QUEEN can be 45.
enum YOURCARDS {ACE = 43, JACK, QUEEN, KING};

2. Write a program that demonstrates that the size of an insigned integer and 
a normal integer are the same
and both are smaller in size than a long integer.

3.Write a program to calculate the area ad circumference where the radius is fed by the user.


4. In excerise 3, if the area and circumference were to be stored , how would the output be ay different?

5. BUGBUSTER: What is wrong in the following initialization:
auto Integer; 
This program is only declaring a value, it hasnt been initialized yet.

