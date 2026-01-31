#include<stdio.h>
int main() {
    int n, prime = 1;
    scanf("%d", &n);

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime && n > 1)
        printf("%d is a prime number", n);
    else
        printf("Not prime");

    return 0;
}
