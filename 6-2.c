#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],x;
    int i=0,b=0,c=0,d=0,e=0;
    while(scanf("%c",&a[i]) && a[i] != '\n'){
        x=a[i];
        if(x>='a' && x<='z'){
            b=b+1;
        }
        else if(x>='0' && x<='9'){
            c=c+1;
        }
        else if(x==32){
            d=d+1;
        }
        else{
            e=e+1;
        }
        i++;
    }
    printf("%d %d %d %d",b,c,d,e);
    return 0;
}
