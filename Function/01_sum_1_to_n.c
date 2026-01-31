#include<stdio.h>
int sum(int a){
    if(a==1){
        return 1;
    }
    return a+sum(a-1);
}
int main(){
    int n=5;
    int m = sum(n);
    printf("%d\n", m);
}
