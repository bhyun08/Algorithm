#include <stdio.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a != 0 && b <45) {
        a = a - 1;
        b = (60 + b) - 45;
    } else if (a == 0 && b <45) {
        a = 23;
        b = (60 + b) - 45;
    } else {
        b = b - 45;
    }
    printf("%d %d", a, b);
    return 0;
}