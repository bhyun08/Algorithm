#include <stdio.h>

int main() {
	int basket=0,line=0;
	int a,b,temp;
	scanf("%d %d",&basket,&line);
	int arr[basket+10];
	for(int i=1; i<=basket; i++)
	{
		arr[i] = i;
	}
	for(int i=0; i<line; i++)
	{
		scanf("%d %d",&a,&b);
		temp=arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for(int i=1; i<=basket; i++)
	{
		printf("%d ",arr[i]);
	}
    return 0;
}