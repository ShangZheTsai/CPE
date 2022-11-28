#include <stdio.h>
#include <stdlib.h>


int main() 
{	int input1,input2,count=0,max=0,x,y,loop;
	
		while(scanf("%d%d",&input1,&input2)!= EOF)
		{	max = 0;
			if(input1>input2)
			{
				x=input2;
				y=input1;
			}
			else
			{
				x=input1;
				y=input2;
			}
			
			for(x;x<=y;x++)
			{	count=0;
				loop=x;
				while(loop!= 1)
				{	
					if(loop%2 == 1)
					{
						loop = 3*loop+1;
					}
					else
					{
						loop = loop/2;
					}
					count = count +1;
				}
				count = count +1;
				if(max < count) max = count;
			}
				printf("%d %d %d\n",input1,input2,max);
		}
}
