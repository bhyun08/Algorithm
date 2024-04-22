#include <stdio.h>

int main() {
int arr[10];
int a,cnt=0;
for(int i=0; i<10; i++)
{
	scanf("%d",&a);	
	arr[i] = a % 42;
}
for(int i=0; i<10; i++)
{
	int num=0;
	for(int j=0; j<i; j++)
	{
		if(arr[i] == arr[j])
		{
			num++;
		}	
	}
		if(num==0)
		{	
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}