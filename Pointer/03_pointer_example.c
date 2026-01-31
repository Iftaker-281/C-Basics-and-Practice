#include <stdio.h>
int main(){
    int a=5, b=7;
    int *p, *q;
    p = &a;
    printf("%d\n", b);
    q = &b;
    *p = *q ;
    printf("%d\n", *p);
    printf("%d\n", a);
    printf("%p\n", q);
    printf("%d\n", *q);
    return 0;
}
