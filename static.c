// Static modifire : used to make a variable just avialble for the exist file if the variable is global. and no other file can access it.
// or we can use it to make a local variable life time 


#include <stdio.h>
// #include "static_prog.c"


extern int count;


int main(void)
{


	// extern int count;

	int value;

	value = increment();
	value = increment();
	value = increment();

	printf("%d", value);


	return(0);
}