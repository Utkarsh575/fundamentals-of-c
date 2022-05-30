#include<stdio.h>
int main()
{
    int n,t,max=0;
    scanf("%d",&n);
    int a[n],b[9],f[9];
    for(int i=0;i<=9;i++)
    {
        b[i]=0;
        f[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<=9;j++)
         {
             f[j]=0;
         }
        while(a[i]!=0)
        {
           t=a[i]%10;
           if(f[t]==0)
           {
              b[t]++;
              f[t]=1;
           }
           a[i]=a[i]/10;
        }
    }
    for(int i=0;i<=9;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%d",max);
    
}