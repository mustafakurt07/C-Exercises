#include<stdio.h>
main()
{
      int sayi,yenisayi=0,kat=1;
      printf("10 luk tabandaki sayiyi giriniz");
      scanf("%d",&sayi);
      getchar();
      while(sayi>0)
      {
                   yenisayi=yenisayi+kat*(sayi%2);
                   kat=kat*10;
                   sayi=sayi/2;
                   }
                   printf("\n%d",yenisayi);
                   getchar();
                   }
