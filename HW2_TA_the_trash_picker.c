#include<stdio.h>

int main(void)
{
    int l, r;
    int num = 1;
    long long int x;
    int j = 1;
    long long int a[1000000] = {0};
    int y,z;

    scanf("%d%d", &l, &r);
    while(num<=l)
    {
        scanf("%lld (/`A`)/ ~I__I", &x);
        a[num] = a[num-1]+x;
        num++;
    }

    while(j<=r){
    scanf("%d%d", &y, &z);
    printf("%lld\n", a[z]-a[y-1]);
    j++;
    }


    return 0;

}
