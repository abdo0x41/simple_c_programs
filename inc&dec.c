// increment & decrement operators : is used to increment or decrement the value of a variable by one.
// post increment var++ :  is used to increment the value of a variable by one after assigning it. & . pre increment ++var : increment the value before assigning it.
// post decrement var-- :  is used to decrement the value of a variable by one after assigning it. & . pre decrement ++var : decrement the value before assigning it.
// we write increment statement like var++ instead of writing var = var + 1; and decrement operands as same.


#include <stdio.h>


int main(void)
{


	int pre_inc, post_inc, pre_dec, post_dec;

	int a = 7, b = 8;


	post_inc = a++;
	printf("postincrement a = %d\n", post_inc); // first will assign the value of a to post_inc variable and then increment the value of a.

	pre_inc = ++a;
	printf("preincrement a = %d\n", pre_inc);// here the value of a is incremented before by one so a = 8, now it will increment the value and then assign it to the variable.

	post_dec = a--; // it will assign the value of a = 9 to the vaiable first and then decrement it
	printf("postdecrement a = %d\n", post_dec); // the value of a = 9, after decrement it will be a=8;

	pre_dec = --a; // it will decrement the value of a = 8; to a = 7; and then assign it to the variable.
	printf("predecrement a = %d\n", pre_dec);



	printf("%d\n", a+++b); // this statement is up to compiler in lexical analysis phase : will consider a++ as a single statment then + then b and the final statement will be (a++ + b)
	printf("%d\n", a+++++b);// it will preduce an error : lvalue required as increment operand.




	return(0);
}