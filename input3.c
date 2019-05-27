#include <stdio.h>
int main()
{
    int i=0,b=0,t;
    int a[100];
    int x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        a[i]=x+y;
    }
    for(b=0;b<i;b++){
        printf("%d\n",a[b]);
    }
    return 0;
}
