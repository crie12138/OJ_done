#include <stdio.h>
int main()
{
    int i,j,sum=1;
    int n;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        sum=1;
        for(j=2;j<i;j++)
        {
            if( i%j == 0)
                sum+=j;
        }
        if(i == sum)
        {
            printf("%d its factors are ",i);
            for( j=1; j<i; j++ )
            {
                if( i%j == 0 )
                    printf("%d\t", j );
            }
            printf("\n");
        }
    }
    return 0;
}
