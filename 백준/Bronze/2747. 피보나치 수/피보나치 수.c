#include <stdio.h>

int main(){
	int b;
	long long a[1000]={0,1,1,};
	scanf("%d", &b);
	for(int i=3; i<=45; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	printf("%lld",a[b]);
}