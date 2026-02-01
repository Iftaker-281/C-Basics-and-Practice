#include <stdio.h>
int main() {
    int a = 5, arr[2] = {20, 25};
    int *ptr = NULL;
    ptr = &a;
    *ptr = 15;
    ptr = &arr[1];
    *(&arr[0] + 1) -= 5;
    printf("%d %d %d\n", a, arr[0], arr[1]);
    return 0;
}
