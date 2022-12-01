#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	int sum1,sum2,i;
	char string[1001];
	scanf("%s",&string);
	while(strlen(string)>1 || string[0]!='0')
	{	sum1=0;
		sum2=0;
		for(i=0;i<strlen(string);i++)
		{
			if(i % 2 == 1)
			{
				sum1 = sum1 +string[i] - '0';
			}
			else
			{
				sum2 = sum2 +string[i] - '0';
			}
		}	
		if((sum2-sum1)%11 ==0)
		{
			printf("%s is a multiple of 11.\n",string);
		}
		else
		{
			printf("%s is not a multiple of 11.\n",string);
		}
		scanf("%s",&string);
	}
	return 0;
}


