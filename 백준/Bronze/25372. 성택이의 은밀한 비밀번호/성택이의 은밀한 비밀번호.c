#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int b;
    scanf("%d",&b);
    for(int i=0; i<b; i++)
    {
        scanf("%s",a);
        int c = strlen(a);
        if(6<=c && c<=9) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
