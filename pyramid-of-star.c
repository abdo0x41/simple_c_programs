#include <stdio.h>



int main(void)
{


	int row, col, n;

	printf("Enter number of  row : ");
	scanf("%d", &n);


	for(row = 1; row <= n; row++)
	{

		for(col = 1 ; col <= (2 * n -1); col++)
		{
			if(col >= n - (row - 1) && col <= n + (row - 1))
			{ 
				printf("*");
			}
			else{
				printf(" ");
			}

		}
		puts("");
	}





	return(0);
}