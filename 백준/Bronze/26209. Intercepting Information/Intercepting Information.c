#include <stdio.h>

int main()
{
    char Z='S';
    int a;
    for(int i=0; i<8; i++)
    {
        scanf("%d",&a);
        if(a==9) Z='F';
    }
    printf("%c",Z);
    return 0;
}
 