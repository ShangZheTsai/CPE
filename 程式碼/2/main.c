#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{	
		if(b>a)
		{
			printf("%lld\n",b-a);
		}
		else
		{
			printf("%lld\n",a-b);
		}
	}
	return 0;
}
