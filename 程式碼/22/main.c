#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* 
sqrt()>>取平方數，注意是double型別，printf用%d印會錯 
ceil()
floor()
*/



int main(int argc, char *argv[]) 
{	
	while(1)
	{	
		int a,b,big,little;
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		
		big = floor(sqrt(b));
		little = ceil(sqrt(a));
		printf("%d\n",big-little+1); 
	}
	return 0;
}

