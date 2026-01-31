#include<stdio.h>
int main() {
    int r = 5, c = 4;
    char ch[] = "ABCDEFGHIJKLMNOPQRST";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%c ", ch[i * c + j]);
        }
        printf("\n");
    }
    return 0;
}
