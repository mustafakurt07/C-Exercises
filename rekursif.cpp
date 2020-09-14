#include<stdio.h>
int us(int x,int y)
{
int sonuc=1,i;
if(y==0) return 1;
else return x*us(x,y-1);
}

main()
{
      int x,y;
      printf("us alıncak sayiyi girin\n");
      scanf("%d %d",&x,&y);
      getchar();
      printf("\n ussun degeri=%d",us(x,y));
      getchar();
}
