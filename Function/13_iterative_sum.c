#include <stdio.h>
int rec(int a) {
    int sum = 0;
    for (int i = a; i >= 0; i--) {
        sum += i;
    }
    sum += 3;
    return sum;
}

int main() {
    int a = 5;
    int b = rec(a);
    printf("%d\n", b);
    return 0;
}
