#include<stdio.h>
int main() {
    int age;
    scanf("%d", &age);

    if(age >= 18)
        printf("You are eligible for vote");
    else
        printf("Not eligible");

    return 0;
}
