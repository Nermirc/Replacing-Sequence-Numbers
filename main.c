#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emir[5];
    int *sayi1,*sayi2;
    int n;
    int gecici;
    printf("Lutfen dizimizin eleman sayisini giriniz.\n");
    scanf("%d",&n);

    for(sayi1=emir;sayi1<emir+n;sayi1++)
    {
        printf("Lutfen eleman giriniz.\n");
        scanf("%d",sayi1);
    }
    printf("Dizinin ilk hali");

    for(sayi1=emir;sayi1<emir+n;sayi1++)
    {
        printf("%4d",*sayi1);
    }
     printf("\n");
     for(sayi1=emir,sayi2=emir+n-1;sayi1<sayi2;sayi1++,sayi2--)
     {
         gecici=*sayi1;
         *sayi1=*sayi2;
         *sayi2=gecici;
     }
        printf("Dizimizin elemanlari yer degistirdikten sonra:\n");

        for(sayi1=emir;sayi1<emir+n;sayi1++)
        {
            printf("%4d",*sayi1);
        }
        printf("\n");

}
