#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
https://www.youtube.com/watch?v=Q9ViPkXCEtY&t=10s 浮點數介紹
double要用lf 
*/

int main(int argc, char *argv[]) 
{
	int number,j,N,i;
	double p,q;
	scanf("%d",&number);
	for(j=0;j<number;j++)
	{
		scanf("%d %lf %d",&N,&p,&i);
		
		q = 1- p;
		
		
		printf("%.4lf\n",pow(q,i-1)*p/(1-pow(q,N)));
	}
	return 0;
}
