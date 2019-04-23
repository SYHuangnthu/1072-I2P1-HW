#include<stdio.h>

int a[200001]={0},b[200001]={0},temptemp[200001]={0},ans[200001]={0};

int main(void)
{
    int n,qq;
    int i,j,temp=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&qq);
        a[i]=qq;
        temptemp[i]=qq;
    }
    for(j=1;j<=n;j++)
    {
        scanf("%d",&qq);
        b[j]=qq;
    }

    for(j=1;j<=n;j++)
    {
        i = temp;
        while(i<=n)
        {
            a[i]=temptemp[i];
            if(a[i]==b[j])
            {
                ans[j]++;
                a[i]=0;
                temp=i+1;
                i=n+1;
            }
            else if(i==n)
            {
                ans[j]=0;
                i++;
            }
            else{
                ans[j]++;
                a[i]=0;
                i++;
            }
        }
    }

    j=1;
    while(j<n)
    {
        printf("%d ",ans[j]);
        j++;
    }
    printf("%d\n", ans[n]);
    return 0;
}
