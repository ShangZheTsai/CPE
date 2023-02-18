#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int to10(void)
{
		int i,sum=0,count=0;
		char input[31];
		scanf("%s",input);
		for(i=strlen(input)-1;i>=0;i--)
		{
			if(input[i]=='1') sum+= pow(2,count); 
			count++;
		}	
		return sum;
}


int main(int argc, char *argv[]) 
{	
	int n,i,input1,input2,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		input1 = to10(); 
		input2 = to10();
		while(input2>0)
		{
			temp = input1;
			input1 = input2;
			input2 = temp%input1;	
		}
		if(input1 != 1) 		printf("Pair #%d: All you need is love!\n",i);
		else if(input1 == 1) 	printf("Pair #%d: Love is not all you need!\n",i);
	}
}
