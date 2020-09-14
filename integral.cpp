#include<stdio.h>
main()
{
      
      double alan=0;
      double aralik=0.000001;
      double i;
      for(i=1.0;i<4.0;i+aralik)
                          {
                           alan=alan+aralik*(i*i);
                            }
                            
                           printf("Alan = %lf",alan);
                           getchar();
                           }
