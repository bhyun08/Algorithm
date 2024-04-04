#include<stdio.h>

int main()
{	
	int abc,d,e,f;
	scanf("%d",&abc);
	scanf("%1d%1d%1d",&d,&e, &f);
	printf("%d\n", abc*f);
	printf("%d\n", abc*e);
	printf("%d\n", abc*d);
	printf("%d\n",(abc*f) + (abc*e*10) + (abc*d*100) ); 
	return 0;
}