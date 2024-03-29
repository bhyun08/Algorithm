#include <stdio.h>

int main(){
	int a, b, c;
	while(1)
	{
		scanf("%d %d", &b, &c);
		if(b == 0 && c == 0) break;
		printf("%d\n", b + c);
		
	}
	return 0;
} 