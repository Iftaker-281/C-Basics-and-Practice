#include<stdio.h>
#include<string.h>
int main() {
    char name[46];
    scanf("%s", name);
    int len = strlen(name);
    int c = 0;
    for(int i = 0 , j = len-1 ; i<len ; i++,j--){
        if(name[i] == name[j]){
            c++;
        }
    }
    if(len == c){
        printf("The number is pelindrom");
    }
    else{
        printf("The number not is pelindrom");
    }
}
