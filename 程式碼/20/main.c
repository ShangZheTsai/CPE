#include <stdio.h>
#include <stdlib.h>

/* 
(和+差)/2=大數 
(和-差)/2=小數 
*/

int main(int argc, char *argv[]) 
{
	int number,sum,difference,big,little;
	scanf("%d",&number);
	while(number!=0)
	{
		scanf("%d %d",&sum,&difference);
		if(sum <0 || difference<0 || sum<difference || (sum + difference)%2 ==1) 
		{
			printf("impossible\n");
		}
		else
		{
			big    = (sum + difference)/2;
			little = (sum - difference)/2;
			printf("%d %d\n",big,little);
		}
		number --;
	}
	return 0;
}
