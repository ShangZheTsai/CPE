#include <stdio.h>
#include <stdlib.h>

/* 
ª`·N´«¦æ 
 */

int Qsort(int input2[],int m,int n)
{
	if(m<n)
	{
		int i,j,pk,temp;
		i=m;
		j=n+1;
		pk = input2[m];
		do
		{
			do
			{
				i++;
			}while(input2[i]<pk);
			do
			{
				j--;
			}while(input2[j]>pk);
			
			if(i<j)
			{
				temp=input2[j];
				input2[j] = input2[i];
				input2[i] =temp;
			}
		}while(i<j);

		temp=input2[j];
		input2[j] = input2[m];
		input2[m] =temp;
		Qsort(input2,m,j-1);
		Qsort(input2,j+1,n);
	}
}


int main(int argc, char *argv[]) 
{ 
	int n,i,j,count,ok,count2=0;
	int input1[101],input2[5100];
	while(scanf("%d",&n)==1)
	{	

		count2++;
		ok=1;
		for(i=0;ok&&(i<n);i++)
		{
			scanf("%d",&input1[i]);

		}
		
		count=0;
		for(i=0;ok&&(i<n);i++)
		{	
			for(j=i;j<n;j++)
			{	
				input2[count] =input1[i]+input1[j];
				count++;
			} 
		}
		Qsort(input2,0,count-1);

		for(i=0;ok&&(i<count-1);i++)
		{
			if(input2[i] == input2[i+1]) ok=0;
		}
		if(ok==1)			printf("Case #%d: It is a B2-Sequence.\n\n",count2);
		else  if(ok==0)		printf("Case #%d: It is not a B2-Sequence.\n\n",count2);

	}
}
