
void BubbleSort(int *DigiTals,int Times)
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
