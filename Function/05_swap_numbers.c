#include<stdio.h>
int swap(int a , int b);
int main(){
    int a = 12 ;
    int b = 19;
    swap(a , b);
}
int swap(int a , int b){
    int temp = a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
} 
