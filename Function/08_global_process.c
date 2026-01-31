#include <stdio.h>
int total = 5;

int process(int a, int b) {
    a = a * 2 + b;
    total += a;
    return a - b;
}

int main() {
    int x = 2, y = 3;
    printf("%d %d %d\n", x, y, total);

    int p = process(x, y);
    printf("%d %d %d %d\n", x, y, total, p);

    int q = process(y, x);
    printf("%d %d %d %d\n", x, y, total, q);

    int r = process(p, q);
    printf("%d %d %d %d\n", x, y, total, r);

    return 0;
}
