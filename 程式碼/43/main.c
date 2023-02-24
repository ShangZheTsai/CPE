#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
��scanf��J����enter�|�Ͽ�J�̫ᦳ\0�A�]��J�w�İ�\0 
gets�|�q�w�İ�Ū���ۦr���A�|Ū��w�İϪ�\0������X
"\n"�bscanf�̭����Ϊk�O�|���L�Ҧ�whitespace character���B�z 

scanf("\n")�O��A��J�Ĥ@�ӪťեL�|�ɳB�z�A���᪺��J�|���w�İ� 
*/

char input[1000000][40];

int comp(const void *a,const void *b)
{
	return strcmp((char *)a,(char *)b);
}

int main(int argc, char *argv[]) 
{
	int n,count,i,k;
	scanf("%d",&n);
	scanf("\n");	
	while(n--)
	{
		for(i=0;i<1000000;i++) input[i][0] = '\0';
		count=0;
		gets(input[count]);
		while(strlen(input[count])!=0)
		{	count++;
			gets(input[count]);
		}
		qsort(input,count,40,comp);
		k=0;
		for(i=0;i<count;i++)
		{	
			if(strcmp(input[i],input[k])!=0)
			{
				printf("%s %.4f\n",input[k],100.0*(i-k)/count);
				k=i;
			}
		}
		printf("%s %.4f\n",input[k],100.0*(i-k)/count);
		if(n==0)	printf("count=%d",count);
		if(n>0) printf("\n");
	}
	
	
	
	return 0;
}
