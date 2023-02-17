#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cheaplist[37];
	int times,times2,i,amount=0,number,number2,count=0,min,a=1;
	scanf("%d",&times);
	while(times--)
	{
		int ink[37];
		for(i=0;i<=35;i++)
		{
			scanf("%d",&ink[i]);	
		}		
		scanf("%d",&times2);
		printf("Case %d:\n",a++);
		while(times2--)
		{	
			
			min =  2000000001;
			count = 0;
			scanf("%d",&number);
			for(i=2;i<=36;i++)
			{	amount = 0;
				number2 =number;
				while(number2>0)
				{ 	
					amount += ink[number2%i];
					number2/=i;
				} 
				
				if(amount<min)
				{
					min = amount;
					cheaplist[1] = i;
					count=1;
				}
				else if(amount ==min) 
				{	
					cheaplist[++count]=i;
				}
			}
			printf("Cheapest base(s) for number %d:",number);
			for(i=1;i<=count;i++)
			{
				printf(" %d",cheaplist[i]);
			}
			printf("\n");
		}
		if(times>0)	printf("\n");
	}
}
