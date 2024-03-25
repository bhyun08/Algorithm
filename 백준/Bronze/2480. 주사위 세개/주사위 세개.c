#include <stdio.h>

int main() {
    int a, b, c, sang;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        sang = 10000 + (a * 1000);
    } else if (a == b || a == c) {
        sang = 1000 + (a * 100);
    } else if (b == c) {
        sang = 1000 + (b * 100);
    } else {
        if (a > b && a > c) {
            sang = a * 100;
        } else if (b > a && b > c) {
            sang = b * 100;
        } else if (c > b && c > a) {
            sang = c * 100;
        }
    }
    
    printf("%d", sang);
    return 0;
}