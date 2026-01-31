#include <stdio.h>
int zz = 10;

int computer(int a, int b) {
    a += b;
    zz += a;
    return (a + b) - 1;
}

int main() {
    int x = 3, y = 4;
    printf("%d %d %d\n", x, y, zz);

    int a = computer(x, y);
    printf("%d %d %d %d\n", x, y, zz, a);

    int b = computer(y, x);
    printf("%d %d %d %d\n", x, y, zz, b);

    int c = computer(a, b);
    printf("%d %d %d %d\n", x, y, zz, c);

    int d = computer(b, c);
    printf("%d %d %d %d\n", x, y, zz, d);

    return 0;
}
