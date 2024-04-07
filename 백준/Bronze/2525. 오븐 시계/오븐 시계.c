#include <stdio.h>

int main() {
	int h, m, end,sum;
	int a, b;
	
	scanf("%d %d %d", &h, &m, &end);
	
	sum = h * 60 + m + end;
	a = sum / 60;
	b = sum % 60;
	if(a >= 24) {
		a = a - 24;
	}
	
	printf("%d %d", a, b);
}