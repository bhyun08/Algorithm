#include <stdio.h>

int main()
{
    int a1=0,a2=0,w1=0;
    int asungneung;
    scanf("%d %d %d",&a1,&a2,&w1);
    asungneung = a2/a1;
    int wsng = (asungneung*3)*w1;
    printf("%d",wsng);
    return 0;
}
