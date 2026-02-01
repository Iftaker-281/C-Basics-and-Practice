#include <stdio.h>
int main() {
    int var = 10;
    int *p;
    p = &var;
    printf("%d \n", var);
    printf("%d \n", *p);
    printf("%p\n", &var);
    printf("%p\n",p);
    printf("%p\n", &p);
    return 0;
}
