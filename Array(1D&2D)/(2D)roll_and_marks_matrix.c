#include<stdio.h>
int main() {
    int students = 4;
    int data[4][2];   // column 0 = roll, column 1 = marks

    for(int i = 0; i < students; i++) {
        scanf("%d %d", &data[i][0], &data[i][1]);
    }

    printf("Roll  Marks\n");
    for(int i = 0; i < students; i++) {
        printf("%d    %d\n", data[i][0], data[i][1]);
    }

    return 0;
}
