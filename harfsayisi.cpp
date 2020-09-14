#include<stdlib.h>
#include<stdio.h>
main()
{
      char isim[10],harfsayisi;
      printf("adinizi yaziniz\n");
      gets(isim);
      printf("merhaba %s,bu gun nasilsin?",isim);
      printf("\nbas harfi = %c\n",isim[0]);
      while(isim[harfsayisi]!='\0') harfsayisi++;
      {
      printf("\nharf sayisi=%d",harfsayisi);
      
      }
      
      getchar();
      }
