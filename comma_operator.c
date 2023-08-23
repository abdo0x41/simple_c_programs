// comma operator and comma sperator

#include <stdio.h>


int main(void)
{


	// int var, num;

	// num = (var = 15, var + 35); // 



	// printf("%d", num);

	// int a = 3, 4, 0; // comma here is treated as sperator.
	// int a = (3, 4, 0); // comma here is treated as operator. and the last value will assign to the variable.

	int a;

	a = 4, 6, 9;// comma here will act as a seprator. and the first value will assign. it back to precedence and associativity, the precednce of assignment is higher than comma.


	printf("\n%d\n", a);




	return(0);
}