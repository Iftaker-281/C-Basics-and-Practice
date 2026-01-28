#include<stdio.h>

int main() {
    // 1. Operator precedence
    int a = 5, b = 2;
    printf("%d\n", a + b * a / b); // Output: 7

    // 2. Tricky increment
    int x = 10;
    x = x++ + ++x;
    printf("%d\n", x); // Output: 22

    // 3. Sum, Difference, Product, Quotient
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n%d\n%d\n%d\n", n+m, n-m, n*m, n/m);

    // 4. Swap two numbers
    scanf("%d %d", &n, &m);
    int temp = n;
    n = m;
    m = temp;
    printf("%d %d\n", n, m);

    // 5. Celsius to Fahrenheit
    int tempC;
    scanf("%d", &tempC);
    printf("The result is %d\n", (tempC*9/5) + 32);

    return 0;
}
