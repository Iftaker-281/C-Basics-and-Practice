#include<stdio.h>
#include<string.h>
int main(){
    char latter[50];
    scanf("%s", latter);
    int len = strlen(latter);
    int c = 0;
    for(int i = 0 ; i<len ; i++){
        if(latter[i]=='a'||latter[i]=='e'||latter[i]=='i'||
           latter[i]=='o'||latter[i]=='u'||
           latter[i]=='A'||latter[i]=='E'||latter[i]=='I'||
           latter[i]=='O'||latter[i]=='U'){
            c = 1;
            break;
        }
    }
    if(c==1){
        printf("Vowel are found");
    }
    else{
        printf("All are consonent");
    }
}
