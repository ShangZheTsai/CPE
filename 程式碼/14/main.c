#include <stdio.h>
#include <stdlib.h>

/* char *weekday[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; �O�C�Ӧr��|���weekday[0]~weekday[7]�S���A���]���O�ŧichar
   �̭��u���@�Ӧr���ASunday�|�Q��bweekday[0][0]~weekday[0][5]�� 
   printf("%s",number[0])�|�L�XSunday 
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

