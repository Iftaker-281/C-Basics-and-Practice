#include<stdio.h>
void printtable(int n);
int sum(int a,int b);

int main ()
{
    int a,b;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("Sum is %d\n", s);

    int n;
    printf("Enter the value of table: ");
    scanf("%d",&n);
    printtable(n);

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
void printtable(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",i*n);
    }
}
