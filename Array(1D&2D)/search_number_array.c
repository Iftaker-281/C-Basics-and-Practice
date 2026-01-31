#include<stdio.h>
int main() {
    int arr[5], num, found = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("The number is found");
    else
        printf("Not found");

    return 0;
}
