#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
gets，要用NULL
一般INT才用EOF 
 */

int main(int argc, char *argv[]) 
{
	int i,j,max=0,count=0,count1=0;
	char input[1010];
	int put[130];
	while(gets(input)!=NULL)
	{	
		for(i=0;i<=128;i++) put[i]=0;
		
		for(i=0;i<strlen(input);i++)
		{	
			put[input[i]]++;
		}
		
		for(i=32;i<=128;i++)
		{
			if(put[i]>max) max = put[i];
		}
		
		if(count!=0) 
		{
			printf("\n");
		}
		count++;
		
		for(i=1;i<=max;i++)
		{
			for(j=128;j>=32;j--)
			{
				if(put[j]==i) printf("%d %d\n",j,i);
			}
		}
		
	} 
	
	return 0;
}
