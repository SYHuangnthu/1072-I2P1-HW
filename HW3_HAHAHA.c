#include<stdio.h>

int gcd(int a, int b);

int main(void)
{
    int a[1000]={0}, n=0;
    int i=1, j=1, temp=0, ans=0;
    int x=0;
    int flag=1;
    scanf("%d\n", &n);

    for(flag=1;flag<=n;flag++)
    {
        scanf("%d", &i);
        a[flag] = i;
    }
    for(i=1; i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            temp=ans;
            ans=gcd(a[i],a[j]);
            if(ans>temp)
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
