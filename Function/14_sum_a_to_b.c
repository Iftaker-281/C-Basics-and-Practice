#include<stdio.h>
int sum(int a , int b){
    if(a==b){
        return b;
    }
    else
        return a + sum(a-1,b);
}
int main(){
    int a = 100;
    int b = 90;
    int m = sum(a,b);
    printf("%d\n",m);
}
