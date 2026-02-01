#include <stdio.h>
int main() {
    int x = 10, y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    printf("Value of y: %d\n", y);
    *ptr1 = *ptr2;
    printf("Value of *ptr1: %d\n", *ptr1);
    printf("Value of x after assignment: %d\n", x);
    printf("Address of ptr2: %p\n", ptr2);
    return 0;
}
