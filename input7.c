#include <stdio.h>
int main()
{
    int a,b,t;
    int i=0;
    int c[100];
    while(scanf("%d %d",&a,&b) != EOF){
        c[i]=a+b;
        i=i+1;
    }
    for(t=0;t<i;t++){
        printf("Case %d: %d\n",t+1,c[t]);
    }
    return 0;
}
