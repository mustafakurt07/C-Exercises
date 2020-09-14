#include<stdio.h>
main()
{
    double  istanbul=14000000;
      double newyork=19000000;
      int sene=2017;
      do{
          istanbul=istanbul*1.03;
          newyork=newyork*1.02;
          
          sene++;
          
          }
          while(istanbul<newyork);
          
          printf("%d.senesinde istanbul New yorku gecer\n",sene);
          getchar();
          }
          
        
