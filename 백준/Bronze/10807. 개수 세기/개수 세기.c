#include <stdio.h>

int main(){
	int b;
	int a;
	int arr[1000];
	int sum = 0;
	scanf("%d",&b);
	for(int i = 0; i < b; i ++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&a);
	for(int j = 0; j < b; j++)
	{
		if(a==arr[j]){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
} 
