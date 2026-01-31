#include <stdio.h>
int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int max_of_four(int a, int b, int c, int d) {
    int m1 = max(a, b);
    int m2 = max(c, d);
    return max(m1, m2);
}

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("%d\n", max_of_four(a, b, c, d));
    return 0;
}
