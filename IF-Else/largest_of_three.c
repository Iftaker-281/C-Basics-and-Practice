#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("A is the maximum");
    }
    else if (b > a && b > c) {
        printf("B is the maximum");
    }
    else {
        printf("C is the maximum");
    }

    return 0;
}
