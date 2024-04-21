#include <stdio.h>

int main() {
	int basket=0,line=0;
	int ball=0;
	int a=0,b=0;
	
    scanf("%d %d",&basket,&line);
    
    int arr[basket];
    for(int i=0; i<basket; i++)
    {
    	arr[i] = 0;
	}
    for(int i=0; i<line; i++)
    {
    	scanf("%d %d %d", &a,&b ,&ball);
    	a -= 1;
    	b -= 1;
    	for(int i=a; i<=b; i++)
    	{
    		arr[i] = ball;
		}
	}
	
	for(int i=0; i<basket; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}