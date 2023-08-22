// write a program to check if the number is an armstrong number or not.

#include <stdio.h>



int main(void)
{

	int number,
		count = 0,
		reminder,
		qoutiont,
		mul = 1,
		result = 0;

	printf("Enter a number : ");
	scanf("%d", &number);

	qoutiont = number;

	while(qoutiont != 0)
	{

		qoutiont /= 10;
		count++;

	} // End while

	qoutiont = number;
	int cnt = count;

	while(qoutiont != 0)
	{

		reminder = qoutiont % 10;

		while(cnt != 0)
		{
			mul *= reminder;
			cnt--;

		}//end while

		result += mul;
		cnt = count;
		qoutiont /= 10;
		mul = 1;

	}// end while

	if(result == number)
	{
		printf("%d is an armstrong.", result);
	}
	else{
		printf("%d isn't an armstrong.", result);
	}



	return(0);
}
