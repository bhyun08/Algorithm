#include <stdio.h>
#include <string.h>

int main() {
 	int line,len;
 	char a[1000];
 	scanf("%d",&line);
 	for(int i=0; i<line; i++)
 	{
 		scanf("%s",a);
 		len = strlen(a);
 		printf("%c%c\n",a[0],a[len-1]);
	 }
	return 0;
}