#include <stdio.h>


int main(void)
{

	int number, qoutiont, reminder, fact = 1, i, result = 0;

	printf("Enter a number : ");
	scanf("%d", &number);

	qoutiont = number;

	while(qoutiont != 0)
	{
		reminder = qoutiont % 10;
		
		for(i = 1; i <= reminder; i++)
		{	
			fact *= i;

		}

		result += fact;
		fact = 1;
		qoutiont /= 10;

	}


	printf("%d %s", result, (result == number)? ("is a strong number") : ("isn't a strong number"));

	return(0);
}