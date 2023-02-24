#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
當scanf輸入完後enter會使輸入最後有\0，也放入緩衝區\0 
gets會從緩衝區讀取自字元，會讀到緩衝區的\0直接輸出
"\n"在scanf裡面的用法是會跳過所有whitespace character不處理 

scanf("\n")是當你輸入第一個空白他會補處理，之後的輸入會放到緩衝區 
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
