#include <stdio.h>
#include <stdlib.h>

/* 
浮點數表示法大概7位左右會不精確，因為無法儲存 
*/

int main()
{
	int i,j,input1,input2,temp,ok;
	int a[10000];
	while(scanf("%d%d",&input1,&input2)==2)
	{	if(input2==1 || input2==0) 
		{
			printf("Boring!\n");
			continue;
		}
		ok=1;
		for(i=0;ok==1&&(input1>=1);i++)
		{	
			a[i] = input1;
			if(input1==1) break;
			if(input1 % input2 !=0) 
			{
				ok=0;
			} 
			if(ok==0) break;
			input1 /=input2;
		}
		if(ok==1) 
		{
			for(j=0;j<=i;j++) printf("%d ",a[j]);
		}
		else if(ok==0) printf("Boring!");
		printf("\n");
	}
	return 0;
}

