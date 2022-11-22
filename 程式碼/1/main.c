#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Qsort(int input[],int m,int n)
{	
	
	if(m<n)
	{
		int temp;	
		int i=m; 
		int j=n+1;
		int pk = input[m];
		do 
		{	
			do
			{	
				i++;
			}while(input[i]<pk);
			
			do
			{	
				j--;
			}while(input[j]>pk);
			
			if(i<j)
			{	
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			} 
		}while(i<j);
		
		temp = input[m];
		input[m] = input[j];
		input[j] = temp; 
		Qsort(input,m,j-1);
		Qsort(input,j+1,n);
	}
}


int main(int argc, char *argv[]) 
{	
	int i,n,relative,x,sum;
	scanf("%d",&n);
	int input[501];
	while(n--)
	{	
		scanf("%d",&relative);
		for(i=0;i<relative;i++)
		{
			scanf("%d",&input[i]);
		}
		Qsort(input,0,relative-1);
		x = input[relative/2];
		sum=0;
		for(i=0;i<relative;i++)
		{
			sum+=(abs(input[i]-x));
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
