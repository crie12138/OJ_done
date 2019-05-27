#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int c,d,i,j,m,n,time=1;
    while(gets(a)!=NULL)
    {
        c=1;
        d=1;
        gets(b);
        m=strlen(a);
        n=strlen(b);
        for(i=0;i<m;i++)
        {
            c=c*(a[i]-64);
        }
        for(j=0;j<n;j++)
        {
            d=d*(b[j]-64);
        }
        if((c%47)==(d%47))
            printf("CASE%d : GO\n",time);
        else
            printf("CASE%d : STAY\n",time);
        time++;
    }
    return 0;
}
