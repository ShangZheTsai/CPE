#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,i,a,flag;
	
	while(scanf("%d",&n)!=EOF)
	{ 	
		int input[3001] = {0},output[3001]={0};
		flag = 0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			input[i] = 	a;	
		}
		for(i=0;i<(n-1);i++)
		{
			
			if(abs(input[i+1]-input[i])>(n-1))
			{	
				flag = 1;
				break;
			}
			else
			{
				output[abs(input[i+1]-input[i])] =1;
			}
		}	
			
		if(flag ==0)
		{
			for(i=1;i<n;i++)
			{
				if(output[i] != 1)
				{	
					flag=1;
					break;
				}
			}
		}
		if(flag ==0)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
	}
	
	return 0;
}
