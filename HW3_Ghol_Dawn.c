#include<stdio.h>


int main(void)
{
    int n,k,i,j;
    long long int a[5000] = {0};
    double x=0, temp=0;
    scanf("%d %d\n", &n,&k);
    for(int flag=1; flag<=n; flag++)
    {
        scanf("%d", &i);
        a[flag]= a[flag-1]+i;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            temp = (double)(a[j]-a[i-1])/(j-i+1);
            if(temp>x)
                x=temp;
        }
    }

    printf("%.3lf\n", x);
    return 0;
} 
