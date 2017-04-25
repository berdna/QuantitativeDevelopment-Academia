//Creating Your First Program : Hello.cpp

#include <iostream> 

int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0; // causes application to exit by returning 0 to the operating system
}

// #include - Hash-Include // std::cout - Standard-c-out// etc.

Lambda Functions are functions without names.
They allow you to write compact function objects without
long class definitions.

The difference between runtime and compile time errors?
Run time errors occur when the program is being executed
Compile time errors dont reach the end-user and are indication
of syntacitical problems; they keep the programmer from 
generating an executable.

Quiz:
What is the difference between an interpreter and a compiler?
An interpreter slows performance because the program is being 
converted to machine language, while a compiler simply runs the 
script text as is .

What does a linker do?
A linker combines all the class object files to make an executable program run.

What are the steps in normal development cycle?
Writing code in a text editor. Compiling code using a compiler that converts it to machine lanague 
version containted in object files.
Linking the output of the compiler using a linker to get an executable.

How does C++ 11 better support Multicore CPUs?
It allows for portable, multithreaded applications to travel between cores.

Exercises
1. 
#include <iostream>
int main()
{
	int x = 8;
	int y = 6;
	std::cout << std::endl;
	std::cout << x - y << " " << x * y << x + y;
	std::cout << std::endl;
	return 0;
}

2. I am predicting that this program will print three different 
equations using subtraction, addition, and multiplication operators.
My prediction was correct expect for spacing, the last two operators
were combined , so I would edit it to add space.

3. 
include <iostream>
int main()
{
	std::cout << "Hello Buggy World \n";
	return 0;
}

4. Errors: There is no # in front of include . The program will print
Hello Buggy World on a new line?
