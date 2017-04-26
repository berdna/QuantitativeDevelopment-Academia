Lesson 2

C++ programs consist of classes, finctions, variables, and other component parts.

Analyze A C++ Program 
Preprocessor directive that includes header iostream
#include <iostream>

Start of your program : function block main()
int main()
{
	/*Writes to the Screen */
	std::cout << "Hello WOrld" << std::endl;

	//Return a value to the OS
	return 0;
}

Broad Classification to two parts : Preprocessor directives
that start with # and the main body of the program that starts 
with int main().

Preprocessor Directive #include 
Preprocessor: A tool that runs before the actual compilation starts
Preprocessor directives are commands to the preprocessor
and always start with a pound sign #.

#include <filename> tells the preprocessor to take the content of the file (iostream, in this case)
and include them at the line where the directive is made.

Directive : authoritive instructions

iostream : is a standard header file that is included because it contains the definition of std::cout 

In professional C++ , not only standard headers are used. Complex applications are typically programmed in multiple files wherein some need to include others
#include "...relative path to FileB\fileB"
Quotes are used not angle brackets because the header is self-created
Brackets are used when including standard headers.

The Body of Your Program main()
After the preprocessor directive(s) comes the body of the program
The execution always starts here 
It is standard that function main() is declared with an int preceiding it
int is the return value type of the function main().

std::cout << "Hello World" << std::endl;
cout("console-out"): is the statement that writes "Hello World"
cout is a stream defined in the standard namespace (hence, std::cout)
You are putting the text in the stream using stream insertion operator
<< : Standard Stream Insertion operator
std::endl is used to end a line


Returning a Value 
Functions in C++ need to return a value unless explicitly specified otherwise.
main() is a function, therefore always returns an integer.
This value is returned to the OS 
Many cases one application is launched by anotehr and the parent 
application(that launches) wants to know if the child application(that was launched)
has completed its task succesfully.
The programmer can use the reutn value of main() to convey a success or error state to the parent application
return 0; //Success
return -1;//error



The Concept of Namespace.
The reason you use std::cout instead of only cout is that 
it is in the standard(std)namespace.

To make code slightly more efficient you can use Namespace declaration
 
#include <iostream>

int main()
{
	using namespace std;
	cout << "Hello World" << endl;
	return 0;
}
-or-
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	cout << "Hello World" << end;
	return 0;
}

#inlude <iostream>
using namespace std;

//Funtion declaration
int DemoConsoleOutput();

int main()
{
	// Call i.e. invoke the function
	DemoConsoleOutput();

	return 0;
}

//Function Defintion
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10/5 = " << 10/5 << endl;
	cout << "Pi when approximated is 22/7 = " << 22/7 << endl;
	cout << "Pi more accurately is 22/7 = " << 22.0/7 << endl;

	return 0;
}

Better Symantics 

#include <iostream>
using namespace std;

//Function declaration and definition
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10/5 = " << 10/5 << endl;
	cout << "Pi when approximated is 22/7 = " << 22/7 << endl;
	cout << "Pi more accurately is 22/7 = " << 22.0/7 << endl;

	return 0;
}
int main()
{
	// Function call with return used to exit
	return DemoConsoleOutput();
}

In cases where a function is not required to make a decision
or return success or failure statues
you can declare a function of return type void:

void DemoConsoleOutput()

Basic Input Using std::cin and Output Using std::cout
The console can read and write information
std::cin >> Variable;
is used to extract data from the console 

Insertion operator << helps insert data into the output stream
Extraction Operator >> extracts data from the input stream 
which is then followed by the variable where the data needs to be stored.

If the user input needs to be stored in two variables each containing data 
seperated by a space, then you can do so using one statement
std::cin >> Variable1 >> Variable2;

Example:

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declare a variable to store an integer
	int InputNumber;

	cout << "Enter an integer: ";

	//Store integer given user input
	cin >> InputNumber;

	//The same with text i.e. string data
	cout << "Enter your name: ";
	string InputName;
	cin >> InputName;

	cout << InputName << "entered " << InputNumber << endl;

	return 0;
}
