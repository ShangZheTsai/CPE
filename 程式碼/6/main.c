#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int recursive(long long num)
{
	if(num==0)
	{
		printf(" 0");
	}
	if(num>=10000000)
	{
		recursive(num/10000000);
		printf(" kuti");
		num %= 10000000;
	}
	if(num<10000000)
	{
		if(num>=100000)
		{
			printf(" %lld lakh",num/100000);
			num %= 100000;
		}
		if(num>=1000)
		{
			printf(" %lld hajar",num/1000);
			num %= 1000;
		} 
		if(num>=100)
		{
			printf(" %lld shata",num/100);
			num %= 100;
		} 
		if (num)
		{
			printf(" %lld",num);
		}
	}
	return 0;
}

int main(int argc, char *argv[]) 
{
	long long num,count=0;
	while(scanf("%lld",&num)==1)
	{	count += 1;
		printf("%4lld.",count);
		recursive(num);
		printf("\n");	
	}
	return 0;
}


