#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int a[4][4];
  
 for(int i=0; i<4; i++)
 {
  for(int j=0; j<4; j++)
  {
    if(i==j)
    {
                                  a[i][j]=1;
                                   printf("%d\t",a[i][j]); }
    else
    {    a[i][j]=0;
                                   printf("%d\t",a[i][j]);
                         }
  }
  printf("\n\n");
 }
 
system("pause");

}


