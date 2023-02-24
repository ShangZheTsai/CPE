#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,train,i,j,temp,count,swap;
	int put[60];
	scanf("%d",&n);
	while(n--)
	{	
		count=0;
		scanf("%d",&train);
		for(i=0;i<train;i++)
		{
			scanf("%d",&put[i]); 
		}
		for(i=0;i<train;i++)
		{
			swap=0;
			for(j=0;j<train-i-1;j++)
			{	
				if(put[j]>put[j+1])
				{
					temp = put[j];
					put[j] = put[j+1];
					put[j+1] = temp;
					count++;
					swap++;
				}
			}
			if(swap==0) break;
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}
