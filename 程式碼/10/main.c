#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int recursive(int input)
{	int output,sum=0;
	while(input != 0)
	{	
		output = input % 10;
		sum = sum + output; 
		input = input /10 ;	
	} 
	return sum;
}


int main(int argc, char *argv[]) 
{
	int a,input,sum;
	scanf("%d",&input);
	while(input != 0)
	{	
		sum = recursive(input);
		while(sum /10 != 0)
		{	
			sum = recursive(sum);
		} 
		printf("%d\n",sum);
		scanf("%d",&input);
	}
	return 0;
}
