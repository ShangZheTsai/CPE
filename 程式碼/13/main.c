#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char input;
	int number = 0;
	while((input = getchar()) != EOF)
	{
			
	
			if(input == '"' && number %2 == 0)
			{
				printf("``");
				number++;
				printf("number=%d\n",number);
			}
			else if(input == '"' && number %2 == 1)
			{
				printf("''");
				number++;
				printf("number=%d\n",number);
			}
			else
			{
				printf("%c",input);
			}			
	
	}
	return 0;
}
