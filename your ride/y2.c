#include <stdio.h>
int main()
{
    char a,b;
    int x=1,y=1,i,j=1;
    int c[100],d[100];
    while(scanf("%c",&a) != EOF){
    for(i=0;i<100;i++){
        scanf("%c",&a);
        if(a == '\n')
            break;
        x=x*(a-64);
    }
    c[j]=x%47;
    for(i=0;i<100;i++){
        scanf("%c",&b);
        if(b == '\n')
            break;
        y=y*(b-64);
    }
    d[j]=y%47;
    j++;
    }
    for(i=1;i<j;i++){
      if(c[i] == d[i])
        printf("CASE%d: GO\n",i);

      else
        printf("CASE%d: STAY\n",i);
    }
    return 0;
}
