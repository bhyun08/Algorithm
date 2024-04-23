#include <stdio.h>

int main() {
    int a;
    int sum;
    while(1)
    {
    	scanf("%d",&a);
    	if(a==0)
    	{
    		return 0;
		}
    	printf("%d\n",a*(a+1)/2);
	}
	return 0;
}