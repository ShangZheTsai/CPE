#include <stdio.h>
#include <stdlib.h>

/* 
scanf的回傳值是輸入個數，也就是%d個數
*/

int main(int argc, char *argv[]) 
{
	int put[34];
	int input,count1,record,bit=0,i;
	while(scanf("%d",&input)!=0)
	{	if(input==0) break;
		bit=0;
		count1=0;
		while(input!=0)
		{	
			bit++;
			record = input %2;
			put[bit] =record;
			input/=2;
			if(record==1) count1++; 
		}
		printf("The parity of ");
		for(i=bit;i>=1;i--)	printf("%d",put[i]);
		printf(" is %d (mod 2).\n",count1);
	}
	return 0;
}
