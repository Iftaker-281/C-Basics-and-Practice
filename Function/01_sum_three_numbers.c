#include<stdio.h>
void info(float a ,float b,float c);

int main(){
    float a,b,c;
    scanf("%f %f %f", &a , &b ,&c);
    info(a,b,c);
    return 0;
}

void info(float a ,float b,float c){
    float sum = a + b + c;
    printf("addition: %.2f", sum);
}
