#include <stdio.h>
#include <stdlib.h>

/*
�D�ػ����w���Ƭ�N�i�� �A�L�|�QN-1�㰣 
�@��r�i��ơA�p�G�Or-1�����ơA��Ҧ��Ʀr���`�M��r-1������ 
*/

int main(int argc, char *argv[]) 
{
	int i,j,number,max,sum;
	char a[1000];
	while(scanf("%s",a)!=EOF)
	{	
		max = 1;	
		sum = 0;
		
		for(i=0;a[i]!=0;i++)
		{
			if(a[i]>='0' && a[i]<='9') number = a[i] - '0';	
			else if(a[i]>='A' && a[i]<='Z') number = a[i] - 'A' +10;	
			else if(a[i]>='a' && a[i]<='z') number = a[i] - 'a' +36;	
			else number =0;
			sum += number;
			if(number>max) max = number;
		}

		
		for(j=max+1;j<=62;j++)
		{
			if(sum % (j-1) ==0)  
			{
				printf("%d\n",j);
				break;
			}
		}
		if(j==63) printf("such number is impossible!\n");
		
		
	}
	return 0;
}
