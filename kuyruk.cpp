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
void ekle(short neyi)// burada elemanlar� ekl�yoruz .Elemanlar� sondan  ekleriz kuyrukta
{
	if(son==5)printf("kuyruk dolu\n");
	else
	{
	
	kuyruk[son]=neyi;
	son++;
}
	
	
}
void cikar()//eleman c�karma once bastak�n�n c�kar�yoruz sonra bas� bir artt�r�yoruz yani  bir ad�m yana kaym�s ol�yor
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
