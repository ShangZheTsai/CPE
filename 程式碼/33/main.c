#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int prime(int x)
{		
	int flag=1,i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{ 
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char *argv[]) 
{
	int i,count=1,a[100],input,x,y,number,temp,count1;
	while(scanf("%d",&input)!=EOF)
	{	temp = input;
		x=prime(input);
	
		if(x==1)
		{	
			count = 0;
			count1 = 0;
			number = 0;
			while(input>0)
			{
				a[count] = input %10;
				input /= 10; 
				if(input>0) count++;
			}
			for(i=count;i>=0;i--)
			{	
				number  += a[i]*pow(10,count1);
				count1++;
			}
			y=prime(number);
			if(number==temp) y=0;
			if(y==1)
			{
				printf("%d is emirp.\n",temp);
			}
			else if(y==0)
			{
				printf("%d is prime.\n",temp);
			}
		}
		else
		{
			printf("%d is not prime.\n",temp);
		}
	}
	return 0;
}
