#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int input[1000000];

int comp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}

int main(int argc, char *argv[]) 
{
	int n,i,A,B,C;
	while(scanf("%d",&n)!=EOF)
	{	B=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&input[i]);
		}
		qsort(input,n,sizeof(int),comp);
	
		if(n%2==1)
		{
			A=input[n/2];
			for(i=0;i<n;i++)
			{
				if(input[i]==A) B++; 
			}
			C=1;
		}
		else
		{	
			A=input[n/2-1];
			for(i=0;i<n;i++)
			{
				if(input[i]>=input[n/2-1] && input[i]<=input[n/2]) B++; 
			}
			C =  input[n/2] - input[n/2-1] +1;
		}
		printf("%d %d %d\n",A,B,C);
	}
	return 0;
}
