// Defining Constants using (const) Keyword

#include <stdio.h>




int main(void)
{


	const int x = 74; // the scope of variable is within this function and can't be able to change or assign any other value to it.
	x = 89; // preduce an error.

	printf("%d\n", x);


	return(0);
}