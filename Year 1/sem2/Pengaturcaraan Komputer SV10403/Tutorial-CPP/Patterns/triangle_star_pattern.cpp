#include <stdio.h>

int main(){
	int n = 6;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		} 
			printf("\n");
	}
	return 0;
}

/**int main(){
	int n = 6;
	
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf("*");
		} 
			printf("\n");
	}
	return 0;
}**/
