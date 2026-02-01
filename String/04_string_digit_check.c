#include<stdio.h>
#include<string.h>
int main(){
    char p[] = "2345";
    int len = strlen(p);
    int count = 0;
    for(int i = 0 ; i<len ; i++){
        if(p[i]>='0' && p[i]<='9'){
            count++;
        }
        else{
            printf("No");
            break;
        }
    }
    if(len==count){
        printf("Yes");
    }
}
