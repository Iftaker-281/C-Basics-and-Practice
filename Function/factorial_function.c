#include<stdio.h>
int num(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    num(n);
    return 0;
}

int num(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("The factorial number is %d\n", fact);
}
