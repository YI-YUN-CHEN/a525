#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int const *DigiTalss,int *DigiTals,const int const Times)
{
  int Temp=0;
    int x=0, y=0;
    for( x = 0;x<Times; x++) {
        for( y=x;y< Times;y++) {
            if( DigiTals[y] < DigiTals[x] ) 
            {
                Temp = DigiTals[y];
                DigiTals[y] = DigiTals[x];
                DigiTals[x] = Temp;
            }
        }
    }
}
