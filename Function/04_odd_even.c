#include<stdio.h>
int oddEven(int n);
int main(){
    int n;
    scanf("%d", &n);
    oddEven(n);
}
int oddEven(int n){
    if(n%2==0){
        printf("Even\n");
    }
    else{
        printf("ODD\n");
    }
}
