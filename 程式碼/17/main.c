#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	long long S,D,first=1,one=1,a,b;
	while(scanf("%lld %lld",&S,&D)!=EOF)
	{	
		while(S<D)
		{
			D-=S;
			S++;
		}
		printf("%d\n",S);
	}
	return 0;
}
