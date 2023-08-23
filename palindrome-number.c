// Check if the number is a palindrome number or not.


#include <stdio.h>



int main(void)
{

	int number, rem, qout, result = 0;

	printf("Enter a number to check is it a palindrome number or not : ");
	scanf("%d", &number);

	qout = number;

	for(;qout != 0;)
	{

		rem = (qout % 10);

		result = (result * 10 + rem);
		qout /= 10;

	}

	if(result == number)
	{
		printf("%d  %s", number, "is a palindrome");
	}
	else{

		printf("%d  %s", number, "isn't a palindrome.");

	}






	return(0);
}