// Arithmetic operators : mathmatic operators --> are binary operators : means they are need two operands 
// percedence & Associativity
// percedence of [Multiplcation, Division, Modulus] are the same and their Associativity is from ( left to right )
// #Note --> Associativity came to the picture when the percedence of the operators are the same.
// percedence of [Addtion, Subraction] is less than [*, /, %]. their associativity from ( left to right ).


#include <stdio.h>


int main(void)
{


	int a = 1, b = 2, c = 3, d = 4;

	printf("a * b / c = %d\n", a * b / c); // 
	printf("a + b - c = %d\n", a + b - c);
	printf("a + b * d - c %% a = %d\n", a + b * d - c % a);
						// ^~~~~~~~~~~~~~~~~~ We added double persantage because the compiler consider it as conversion specifire. so we add two to print the persantage sign.

	



	return(0);
}