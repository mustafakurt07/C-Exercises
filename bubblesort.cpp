#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
int main(){
 
    int sinir, gecici;
    int dizi[100];
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Ka� adet say� girilece�i kullan�c�dan ��renilir
 
    
    for(int i=0; i<sinir; i++){  //Kullan�c�dan say�lar al�n�r
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Al�nan say�lar ekrana yazd�r�l�r
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); // say�lar yazd�r�ld�ktan sonra 2 sat�r a�a�� iner
    
    //Bubble sort algoritmas� (K���kten b�y��e s�ralama yapar)
    for(int i=0; i<sinir; i++){
        for(int j=0; j<sinir-1-i; j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    //Dizinin s�ralanm�� halini ekrana yazd�r�r
    for(int i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
    return 0;
}
