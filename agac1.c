#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
int yas;
 struct tree  *sol;
   struct tree  *sag;	
}agac;

agac *kok=NULL;

void ekle(short int gelen)
{
	agac *yeni;
	yeni=malloc(sizeof(agac));
	yeni->yas=gelen;
	yeni->sol=NULL;
	yeni->sag=NULL;
	if(kok==NULL) kok=yeni;
	else
	{
		agac *d=kok,*anne;
		while(d!=NULL)
		{
			anne=d;
			if(gelen<d->yas) d=d->sol;
			else d=d->sag;
		}
		if(yeni->yas<anne->yas)
		anne->sol=yeni;
		else 
		anne->sag=yeni;
		
		
	}
}
void gez(agac *d)
{//INORDER GEZÝYORUZ
//sol-kok-sag seklinde
if(d!=NULL)
{
	gez(d->sol);
	printf("%d,",d->yas);
	gez(d->sag);
}
	
	
	
	
	
}
agac* minbul(agac *dugum)
{
	if(dugum==NULL)
	{
		return NULL;
	}
	if(dugum->sol!=NULL)
	return minbul(dugum->sol);
	else
	return dugum;
}


main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		ekle(rand()%100);
	}
	gez(kok);
	

	
	
	
}
