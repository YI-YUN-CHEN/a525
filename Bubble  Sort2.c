#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int *DigiTals,int *DigiTalss,int Times)
{
    int Temp=0;
    int x=0, y=0;
    for( x = 0;x<Times; x++) {
        for( y=x;y< Times;y++) {
            if( DigiTalss[y] < DigiTalss[x] ) 
            {
                Temp = DigiTalss[y];
                DigiTalss[y] = DigiTalss[x];
                DigiTalss[x] = Temp;
            }
        }
    }
}
