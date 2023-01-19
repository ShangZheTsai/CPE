#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
有另一個方法，更好，youtube 
*/

int main(int argc, char *argv[]) 
{	
	int n,number,count2 = 0,count16=0,number2,a,b=0,c=0;
	scanf("%d",&n);
	while(n--)
	{	
		b=0;
		c=0;
		count2=0;
		count16=0;
		scanf("%d",&number);
		number2 = number;
		while(number)
		{
			if((number%2)==1) count2++;
			number /=2;
		}
		while(number2>0) 
		{	
			a = number2 %10;
			number2 /= 10;
			b = b + a*pow(16,c);
			c++;
		}
		while(b)
		{	
			if((b%2)==1) count16++;
			
			b /=2;
		}
		printf("%d %d\n",count2,count16);
	}
	return 0;
}
