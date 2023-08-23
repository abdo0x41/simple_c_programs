#include <stdio.h>


int main(void)
{

	int i = 3;

	while(i != 0)
	{

		printf("while loop : %d\n", i);

		i--;

	} 


	for(i = 3;i > 0; i--)
	{
		printf("for loop :%d\n", i);
	}


	return(0);
}