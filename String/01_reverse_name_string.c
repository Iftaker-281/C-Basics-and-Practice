#include<stdio.h>
#include<string.h>
int main(){
    char name [50];
    scanf("%s", name);
    int len = strlen(name);
    for(int i = 0 ; i<len/2 ; i++){
        char temp = name[i];
        name[i] = name[len - 1- i];
        name[len - 1- i] = temp ;
    }
    printf("The reverse name is : %s", name);
    return 0;
}
