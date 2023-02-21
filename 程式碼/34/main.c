#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,sum,num,count;
	char input[1001];
	while(scanf("%s",input)!=EOF)
	{
		sum=0;
		if(input[0]=='0') break;
		for(i=0;i<strlen(input);i++)
		{
			sum+=input[i]-'0';
		}
		count=1;
		
		while(sum>9)
		{	
			num = sum;
			sum =0;
			while(num>0)
			{
				sum += num %10;
				num /=10; 
			}
			count++;
		}
		if(sum==9) printf("%s is a multiple of 9 and has 9-degree %d.\n",input,count);
		else printf("%s is not a multiple of 9.\n",input);
	}
	
	return 0;
}
