#include<stdio.h>

int main(void)
{
    int n,k,i,j;
    long long int qq;
    long long int a[5010] = {0};//³Ì¦h5000
    double x=0, temp=0,b=1.0;
    scanf("%d %d\n", &n,&k);
    for(int flag=1; flag<=n; flag++)
    {
        scanf("%lld", &qq);
        a[flag]= a[flag-1]+qq;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            temp = (a[j]-a[i-1]);
            temp = temp/(j-i+1);
//            printf("%.3lf\n", temp);
            if(temp>x)
                x=temp;
        }
    }

    printf("%.3lf\n", x);
    return 0;
}
