#include <stdio.h>

int main(){
	int a,b;
	int i;
	int arr[100000];
	int sum;
	scanf("%d %d",&a,&b);

	for(int j = 0; j < a; j++)
	{
		scanf("%d",&arr[j]);
	}
	for(int t = 0; t < a; t++)
	{
		if(b > arr[t])
		{
			printf("%d ",arr[t]);
		}
	}
	return 0;
} 