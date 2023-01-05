#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int T,i,j,a,b,sum;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{	
		sum = 0;
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++)
		{
			if(j%2 ==1)
			{	
				sum=sum+j;
			}
		}
		printf("Case %d: %d\n",i,sum);
	}
	
	return 0;
}
