#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{	
	int num1,num2,remainder1,remainder2,carry=0,count=0;
	scanf("%d%d",&num1,&num2);
	while(num1 || num2)
	{
		while(num1 || num2)
		{
			remainder1 = num1 % 10;
			remainder2 = num2 % 10;
			carry = (remainder1 + remainder2 + carry)>9;
			count = count + carry;
			num1 = num1 / 10;
			num2 = num2 / 10;
			
		}
		if (count == 0) printf("No carry operation.\n");
		else if (count == 1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",count);
		scanf("%d%d",&num1,&num2);
		carry=0,count=0;
	} 
	  
	return 0;
}
