#include<stdio.h>
int main() {
    int n;
    float sum = 0, average;

    scanf("%d", &n);
    int marks[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / n;
    printf("The average mark is %.2f", average);
    return 0;
}
