// write a program to do addition operator without using pluse operator.

#include <stdio.h>



int main(void)
{

	int num1, num2, i, result = 0;

	puts("Simple program to add to numbers.");

	printf("%s", "Enter Two Numbers : ");
	scanf("%d %d", &num1, &num2);

	int val1 = num1;

	for(i = 0; i <= num2; i++)
	{
		result = val1++;

	}// end for

	printf("%d + %d = %d", num1, num2, result);


	return(0);
}