#include<stdio.h>

int main(void)
{
    int a1, a2, b1, b2;
    int answer;
    scanf("%d.%d %d.%d", &a1, &a2, &b1, &b2);
    answer = (a1*100+a2)*(b1*100+b2);
    printf("%d.%04d\n", answer/10000, answer%10000);
    return 0;

}
