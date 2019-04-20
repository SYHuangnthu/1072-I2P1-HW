#include<stdio.h>

int main(void)
{
    int n,ans=0;
    long long int k,qq;
    long long int a[21]={0};

    scanf("%d", &n);
    scanf("%lld", &k);

    for(int flag=1;flag<=n;flag++)
    {
        scanf("%lld", &qq);
        a[flag]= qq;
    }

    for(int j=1;j<=n;j++)
    {
        if(a[j]==k)
            ans++;
        else
            a[j+1] += a[j];
    }
    printf("%d\n", ans);
    return 0;
}
