// Define a constant value useing #define


#include <stdio.h>

// #define  PI 3.14159 // define a constant

// #define  value	99 // we don't use semicolon to end macro statement.

// #define	 add(x, y)	(x + y) // this is called macro like a function.
	
// #define   com(x, y)		if(x > y)\
						  	printf("%d is greater than %d\n", x, y);\
						else if(x < y) \
						  	printf("%d is less than %d\n", x, y); \
						else if(x == y) \
							printf("%d is equal to %d\n", x, y);\ // Here we can use multiple lines.
						


// #define  add(x, y)	x + y	// First expansion then evaluation. -->  5 * 5 + 4
// #define  add(x, y)	(x + y)	// First expansion then evaluation. --> 5 * (5 + 4)




int main(void)
{


	// int value = 13; // we can't define a variable with the same name of the constant :   it equals to : int 99 = 13; <-- that is not allowed.

	
	// printf("%f\n", PI);
	// printf("%d\n", value);
	// printf("%d\n", add(5, 4));
	
	// com(30, 30); // Compare between two numbers 
		

	// printf("a * b + c = %d\n", 5 * add(5, 4));



	// Using some predefined macros like __DATE__, __TIME__ (Print current date and time)

	printf("DATE : %s\n", __DATE__);
	printf("TIME : %s\n", __TIME__);


	return(0);
}