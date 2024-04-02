#include <stdio.h>

int main(){
	int a;
	
	int max;
	int min;
	
	scanf("%d",&a);
	int arr[a];
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(int j = 0; j < a; j++)
	{
		if(arr[j] > max)
		{
			max = arr[j];
		}
		else if(arr[j] < min)
		{
			min = arr[j];
		}
	}
	printf("%d %d", min, max);
	return 0;
}