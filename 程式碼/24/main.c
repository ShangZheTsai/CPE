#include <stdio.h>
#include <stdlib.h>

/* 
�[�t��=a
�t��=v
�ɶ�=t
�첾=s 
a=v/t
s=1/2 at^2 >> s=1/2 v/t*(2t)^2 = 2vt

*/

int main(int argc, char *argv[]) 
{
	int v,t;
	while(scanf("%d %d",&v,&t)!=EOF)
	{
		printf("%d\n",2*v*t);
	}
	return 0;
}
