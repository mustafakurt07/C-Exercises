#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     int sayi[100];
     int i;
     int bayrak=0;
     int ara;
     srand(time(NULL));
     for(i=0;i<100;i++)
     sayi[i]=rand()%99+1;
     printf("Neyi arayalim?\n");
     scanf("%d",&ara);
     getchar();
     for(i=0;i<100;i++)
     {
                       if(sayi[i]==ara)
                       {
                                       printf("%d. sirada\n",i);
                                       bayrak=1;
                                      
                                       }
                                       }
                                       if(bayrak==0)printf("Bulamadim");
                                       getchar();
                                       }
