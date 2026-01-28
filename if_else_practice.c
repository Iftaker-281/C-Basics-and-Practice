#include<stdio.h>

int main(){
    // 3
    int x = 6;
    if (x > 5)
    if (x < 20)
        printf("A");
    else
        printf("B");

    // 14
    int a = 3;
    switch(a) {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three");
        default: printf("Default");
    }

    // 15
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("The number is positive number");
    }
    else if(n<0){
        printf("The number is negative number");
    }
    else{
        printf("The number is zero");
    }

    // 16
    int b , c;
    scanf("%d %d %d", &a ,&b , &c);
    if(a>b){
        if(a>c){
            printf("A is maximum number",a);
        }
        else("C is maximum");
    }
    else{
        if(b>c){
                printf("B is maximum");
        }
        else{
            printf("C is maximum");
        }
    }

    // 17
    int year;
    scanf("%d", &year);
    if(year % 4 == 0 || year %100!= 0 || (year%400==0)){
        printf("The year is leap year");
    }
    else{
        printf("Not leap year");
    }

    return 0;
}
