#include<stdio.h>

int gcd(int a, int b);

int main(void)
{
    int a[1000]={0}, n=0;
    int i=1, j=1, ans=0;
    int x=0;
    int flag=1;
    scanf("%d\n", &n);

    while(flag<=n && n>=2)
    {
        scanf("%d", &i);
        a[flag] = i;
        flag++;
    }
    for(i=1; i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            ans=gcd(a[i],a[j]);
            if(ans>x)
            {
                x=ans;
            }
        }
    }
    printf("%d\n", x);

    return 0;

}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
