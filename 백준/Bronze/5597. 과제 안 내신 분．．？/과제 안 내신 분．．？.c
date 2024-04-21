#include <stdio.h>

int main() {
	int arr[31];
	int a;
	for(int i=1; i<=30; i++)
	{
		arr[i] = 0;
	}
	for(int i=1; i<=28; i++)
	{
		scanf("%d",&a);
		arr[a] = a;
	}
	for(int i=1; i<=30; i++)
	{
		if(arr[i] == 0)
		{
			printf("%d\n",i);
		}
	}
    return 0;
}