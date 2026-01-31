#include<stdio.h>
int rec(int a){
    if(a<0){
        return 3;
    }
    return a+rec(a-1);
}
int main(){
    int a = 5;
    int b = rec(5);
    printf("%d\n", b);
}
