#include <stdio.h>

int main()
{
    int lc1,lc2,cs=0;

    for(lc1=1; lc1<=5; lc1+=2)
        for(lc2=1; ; lc2+=2){
            if(lc2 > lc1)
                break;
        printf("Case %d: %d * %d = %d\n", ++cs,lc1,lc2,lc1*lc2);
        }

    return 0;
}
