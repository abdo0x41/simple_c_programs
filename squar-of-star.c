#include <stdio.h>


int main(void)
{


// Writer a program to print a square.


	// int row, col, n;

	// printf("enter how many rows and colomn : ");
	// scanf("%d", &n);

	// for(row = 1; row <= n; row++)
	// {

	// 	for(col = 1; col <= n; col++)
	// 	{
	// 		printf("*");
	// 	}

	// 	puts("");

	// }


	int row, col;

	char i = 1;

	// printf("Enter number of colomn : ");
	// scanf("%d", &n);

	

	for(row = 1; row <= 5; row++)
	{
		for(col = 1; col <= i; col++)
		{
			printf("* ");
		}

		puts("");
		i++;
	}





	return(0);
}