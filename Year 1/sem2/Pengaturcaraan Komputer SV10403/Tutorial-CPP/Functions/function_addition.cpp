/*
1. declare return
2. specify the funtion name
3. is there any input parameter
4. list of statements
*/

/*float : perpuluhan
double : also for floating number but bugger
char :alphabet a,b,c,... how to know its a character, add single code like 'a' 'b' '33' '45'
																					^ these number are still char cuz it cant be use as math operator
string "myname is...."

' .. ' single code for character'
" .. " for string
*/

#include <stdio.h>

int additionFunc(int a, int b)
{
	int result=0;
	result=a+b;
	return result;
}
//^^ why is this need? :because it falls under the func reuseable^^ (a reusable method)

int main(void)
{	

	int myNumber;
	int mySecondNumber;
	int result,result1;
	
	myNumber=100;
	mySecondNumber=77;
	result=additionFunc(myNumber, mySecondNumber);
	result1= additionFunc(50, 100);
    
	printf("my addition of two numbers= %d\n",result);
	printf("my addition of two numbers= %d",result1);
	
	return 0;
}
