#include <stdio.h>

int main()
{
    int reward;
    double money1,money2;
    scanf("%d",&reward);
    money1=reward;
    money2=reward;
    money1=money1-(money1*0.22);
    money2=(money2*0.8)+((money2*0.2)*0.78);
    printf("%.0f %.0f",money1,money2);
    return 0;
}
