#include<stdio.h> //dogrusal kuyruk
short int kuyruk[5];
short int bas=0;
short int son=0;
void goster()
{
	short i;
	for(i=bas;i<son;i++)
	printf("%d,",kuyruk[i]);
	printf("\n");
	
	
	
	
}
void ekle(short neyi)// burada elemanlarý eklýyoruz .Elemanlarý sondan  ekleriz kuyrukta
{
	if(son==5)printf("kuyruk dolu\n");
	else
	{
	
	kuyruk[son]=neyi;
	son++;
}
	
	
}
void cikar()//eleman cýkarma once bastakýnýn cýkarýyoruz sonra basý bir arttýrýyoruz yani  bir adým yana kaymýs olýyor
{
	if(son==0)printf("guyruk zaten bostir\n");
	else
	{
			printf("%d cikti\n",kuyruk[bas]);
			bas++;
		
		
		
		
	}
	
	
	
	
	
}
main()
{
	
	ekle(22);ekle(11);ekle(47);
	goster();
	cikar();
	goster();
	
	
	
	
	
	
	
	
	
}
