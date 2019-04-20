#include<stdio.h>

int main(void)
{
    int a[20001]={0},b[20001]={0},ans[20001]={0};
    int n,qq;
    int i,j,temp=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&qq);
        a[i]=qq;
    }
    for(j=1;j<=n;j++)
    {
        scanf("%d",&qq);
        b[j]=qq;
    }
    for(j=1;j<=n;j++)
    {
        i = temp;
        while(i<=5)
        {
            if(a[i]==b[j])
            {
                ans[j]++;
                temp=i+1;
                i=6;
            }
            else if(i==5)
            {
                ans[j]=0;
                i=6;
            }
            else{
                ans[j]++;
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
