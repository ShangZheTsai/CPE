#include <stdio.h>
#include <stdlib.h>

/* char *weekday[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; 是每個字串會放到weekday[0]~weekday[7]沒錯，但因為是宣告char
   裡面只能放一個字元，Sunday會被放在weekday[0][0]~weekday[0][5]中 
   printf("%s",number[0])會印出Sunday 
*/

int main(int argc, char *argv[]) 
{
	int input,i,j,month,day,count,a=5;
	char *weekday[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int monthday[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
	scanf("%d",&input);
	for(i=0;i<input;i++)
	{	
		int number = 0;
		scanf("%d %d",&month,&day);
		for(j=0;j<month;j++)
		{
			number = number + monthday[j];
		}
		number +=day;
		number = (a + number)%7;
		printf("%s\n",weekday[number]);
	}
	
	return 0;
}

