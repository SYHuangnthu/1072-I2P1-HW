#include<stdio.h>

int main (void){

    char ch;

    while (scanf("%c", &ch) != EOF) {//scanf("%c", &ch) -> (ch = getchar())
        printf("%c", ch);//printf("%c", ch) -> putchar(ch);
    }

    return 0;
}
