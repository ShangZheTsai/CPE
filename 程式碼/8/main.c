#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i,j,line,f,max=0,count[127]={0};
	char string[1000],c;
	scanf("%d\n",&line);
	for(i=0;i<line;i++)
	{	
		gets(string);
		for(j=0;j<strlen(string);j++)
		{
			c = string[j];
			if(c>='a' && c<='z') 
			{
				c -= 32;
			}
			if(c>='A' && c<='Z')
			{
				count[c] +=1;
			}
		}				
	}

	
	for(i='A';i<='Z';i++)
	{	
		if(count[i]>max)
		{	
			max = count[i];
		}	
	}
	
	
	while(max>0)
	{	f=0;
		for(i='A';i<='Z';i++)
		{	
			if(count[i] == max)
			{	
				printf("%c %d\n",i,max);
			}	
			else if(count[i]<max)
			{	
				if(count[i]>f)
				{
					f = count[i];
				}
			}
		}
		max = f;
	}
	
	return 0;
}

