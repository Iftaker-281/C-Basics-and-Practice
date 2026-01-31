#include<stdio.h>
int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("MAXIMUM : %d\n", max);
    printf("MINIMUM : %d", min);
    return 0;
}
