#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] ;
    int i=0;
    for (i; i<5; i++)
        scanf("%d",&x[i]);
    for (i=0; i<5; i++)
        printf("%d",x[i]);
    return 0;
}
