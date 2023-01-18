#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,times,number,flag;
	int a[40];
	a[0] =1;
	a[1] =2;
	for(i=2;i<=38;i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	scanf("%d",&times);
	while(times--)
	{	flag = 0;	
		scanf("%d",&number);
		printf("%d = ",number);
		for(i=38;i>=0;i--)
		{	
			if(number>=a[i])
			{
				printf("1");
				number -=a[i];
				flag = 1;
			}
			else
			{
				if(flag ==1) printf("0");
			}
		}
		printf(" (fib)\n");
		
	}

	return 0;
}
