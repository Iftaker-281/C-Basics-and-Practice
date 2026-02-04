#include<stdio.h>
int main() {
    int n = 9;
    int arr[] = {89,56,32,44,12,14,78,34,22};
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<=n ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    for(int j = 0 ;j<n ;j++){
        printf("%d " , arr[j]);
    }
}
