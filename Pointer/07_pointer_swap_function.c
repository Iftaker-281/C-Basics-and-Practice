#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 15, b = 30;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(p1, p2);
    printf("After swap: a = %d, b = %d\n", a, b);
    printf("Address of p1: %p\n", p1);
    printf("Address of p2: %p\n", p2);
    return 0;
}
