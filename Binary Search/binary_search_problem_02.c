#include<stdio.h>

int main(void){
    int arr[] = {2, 3, 4, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1, x = 12;
    int index = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x){
            index = mid;
            break;
        }
        if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(index == -1)
        printf("Not Found");
    else
        printf("%d present at index %d", x, index);

    return 0;
}

/*
Output:
Not Found
*/
