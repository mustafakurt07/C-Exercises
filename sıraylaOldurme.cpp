#include<stdio.h>
int main()
{
	
int kisi,olum;
int iter=0;	
int i;
	printf("kac kisi var\n");
	scanf("%d",&kisi);
	getchar();
	printf("hangi aralikta olucek\n");
	scanf("%d",&olum);
	getchar();
	int topluluk[kisi];
	for(i=0;i<kisi;i++)
	{
		topluluk[i]=1;
	}
	for(int i=0;i<(kisi-1);i++){

for(int j=0;j<olum;j++){

do{
	iter++;
	if(iter>kisi) iter=0;
}
while(topluluk[iter]!=1);
}
topluluk[iter]=0;

}
	for(i=0;i<kisi;i++){
	
	if(topluluk[i]!=0)printf("yasayan kisi :%d",i);
}
	return 0;
}







n#
