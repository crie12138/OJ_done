#include <stdio.h>
int main()
{
    char a[100],b[100];
    int x=1,y=1,i=0,j=0;
    int c[100],d[100];
    while(scanf("%c",&a[i]) != EOF){
    while(scanf("%c",&a[i]) != '\n'){
	    x=x*(a[i-1]-64);
    }
    c[j]=x%47;
    while(scanf("%c",&b[i]) != '\n'){
        y=y*(b[i]-64);
    }
    d[j]=y%47;
    j++;
    }
    for(i=0;i<j;i++){
      if(c[i] == d[i])
        printf("CASE%d : GO\n",i+1);
      else
        printf("CASE%d : STAY\n",i+1);
    }
    return 0;
}
