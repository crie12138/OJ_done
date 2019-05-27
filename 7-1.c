#include <stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        t=1;
        for(j=2;j<=(i/2);j++)
        if(i%j==0)
        t=0;
        if(t==1)
        printf("%d\n",i);
        }
    return 0;
}
