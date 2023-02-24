#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int n,yes,convert,drink,sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=n;
		while(n>=3)
		{
			yes=n/3;	
			convert=n%3;
			n=yes+convert;
			sum += yes;
		}
		if(n==1)
		{
			printf("%d\n",sum);
		}
		else if(n==2)
		{
			printf("%d\n",sum+1);
		}
	}
	return 0;
}
