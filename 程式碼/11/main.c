#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
輸入空白也算，所以要用gets 
*/

int comp(const void *a,const void *b)
{	
	return *(char *)a-*(char *)b;
}



int main(int argc, char *argv[]) 
{	
	
	
	int i,j;
	char input1[1001],input2[1001];
	while(gets(input1)!=NULL && gets(input2)!=NULL)
	{		
			qsort(input1,strlen(input1),sizeof(char),comp); 
			qsort(input2,strlen(input2),sizeof(char),comp);

		for(i=0,j=0;i<strlen(input1)&&j<strlen(input2);)
		{	
			if(input1[i]==input2[j] && input1[i]!=32 && input2[j]!=32)
			{	
				printf("%c",input1[i]);
				i++;
				j++;
			}
			else if(input1[i]>input2[j])
			{	
				j++;
			}
			else i++;
		}
		printf("\n");
	}
	return 0;
}

