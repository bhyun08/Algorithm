#include <stdio.h>

int main()
{
    int a,sum=0;
    for(int i=0; i<6; i++)
    {
        scanf("%d",&a);
        sum += a;
    }
    printf("%d",sum*5);
    return 0;
}
