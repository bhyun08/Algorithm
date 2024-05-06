#include <stdio.h>

int main(){
    int a1,b1,c1,a2,b2,c2;
    scanf("%d %d %d",&a1,&b1,&c1);
    scanf("%d %d %d",&a2,&b2,&c2);
    printf("%d %d %d",a2-c1,b2/b1,c2-a1);
    return 0;
}