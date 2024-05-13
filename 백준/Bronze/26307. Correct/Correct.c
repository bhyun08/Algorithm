#include <stdio.h>

int main()
{
    int h,m,sum;
    scanf("%d %d",&h,&m);
    h = h-9;
    sum = h*60 + m;
    printf("%d",sum);
    return 0;
}
 