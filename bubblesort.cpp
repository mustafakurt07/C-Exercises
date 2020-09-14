#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
int main(){
 
    int sinir, gecici;
    int dizi[100];
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Kaç adet sayý girileceði kullanýcýdan öðrenilir
 
    
    for(int i=0; i<sinir; i++){  //Kullanýcýdan sayýlar alýnýr
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Alýnan sayýlar ekrana yazdýrýlýr
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); // sayýlar yazdýrýldýktan sonra 2 satýr aþaðý iner
    
    //Bubble sort algoritmasý (Küçükten büyüðe sýralama yapar)
    for(int i=0; i<sinir; i++){
        for(int j=0; j<sinir-1-i; j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    //Dizinin sýralanmýþ halini ekrana yazdýrýr
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
    return 0;
}
