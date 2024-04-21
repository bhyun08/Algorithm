#include <stdio.h>

int main() {
    int arr[9];
    int max = 0;
    int where = 0;
    for(int i=0; i<9; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<9; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	for(int i=0; i<9; i++)
	{
		where ++;
		if(arr[i] == max)
		{
			break;
		}
	}
	printf("%d %d",max,where);
    return 0;
}