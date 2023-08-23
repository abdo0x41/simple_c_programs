/**** Write a program to check if the givin number is prime or not.
 * 
 * 	*** Pseudo Code ***
 * 	
 * 	
 * 	
 * 
 * 
 * 
 * 
*/

#include <stdio.h>




int main(void)
{

	int num, isPrime = 0, i, result = 0;

	printf("Enter a number : ");
	scanf("%d", &num);


	for (i = 1; i <= num; ++i)
	{
		isPrime = num % i;

		if(isPrime == 0)
		{
			result++;
		
		}// end if

	}// end for loop

	printf("%d %s", num, ((result <= 2)? ("is prime") : ("is compsite")));


	





	return(0);
}