#include <stdio.h>

int main() {
	int l,h;
	scanf("%d %d",&l ,&h);
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<h; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}