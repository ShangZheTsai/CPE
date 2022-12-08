#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	char keyboard[] = {"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
	char input;
	int i;
	while(scanf("%c",&input) != EOF)
	{	
		if(input==10 || input==32)
		{
			printf("%c",input);
		}
		else
		{
			
			for(i=0;keyboard[i]!='\0';i++)
			{	input = tolower(input);
				if(input==keyboard[i])
				{
					printf("%c",keyboard[i-2]);
					break;
				}
			}
		}
		
	}
	return 0;
}
