//What is the output of the following code?
#include<stdio.h>
int main(){
int a = 5, b = 2;
printf("%d", a + b * a / b);
}
//Output : 7


//What will this print?
include<stdio.h>
int main(){
int x = 10;
x = x++ + ++x;
printf("%d", x);
}
//Output : 22

//Write a program to take two integers from the user and print their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
    printf("%d\n %d\n %d\n %d\n", n+m , n-m , n*m , n/m);
}

//Write a program that swaps two numbers using a third variable.
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n , &m);
    int temp = n;
    n = m;
    m = temp;
    printf("%d %d", n , m);
    return 0;
}

//Write a program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    int temp;
    scanf("%d", &temp);
    printf("The result is %d", (temp*9/5) + 32);

}
