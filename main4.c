#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int* const ,int* ,const int const );

int main()
{
   int DigiTals[10]={9,5,6,7,8,1,2,4,3,10};
    int i=0;
    
    
    printf("�Ƨǫe:");
    
     for( i = 0; i < 10; i++ ) {
        printf("%3d", DigiTals[i]);
    }
   
    BubbleSort(DigiTals,DigiTals,10);
   
    printf("\n\n�Ƨǫ�:");
    for( i = 0; i < 10; i++ ) {
        printf("%3d", DigiTals[i]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
