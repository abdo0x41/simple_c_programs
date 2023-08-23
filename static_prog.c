
// int count; // global variable : is by default initialized with 0. avliable for other file consists with the same project thay can extern it and use it and modify it.
		   // to make this variable just visiable for the existing file we use static modifire keyword.

int a; 


int increment(void)
{




	int count = 0; // local variable is initialiazed by default with random value (garbage value). the life time of this variable is within the function, after function finish execution.
	count = count + 1;

	return(count);
} 