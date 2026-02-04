#include<stdio.h>

int main(void){
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(nums) / sizeof(nums[0]);
    int low = 0, high = n - 1, target = 2;
    int index = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            index = mid;
            break;
        }
        if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(index == -1)
        printf("%d does not exist, return %d", target, index);
    else
        printf("%d is present in array at index %d", target, index);

    return 0;
}

/*
Output:
2 does not exist, return -1
*/
