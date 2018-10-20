// Napisz program, kt�ry wczytuje dowoln�
//  liczb� ca�kowit� x oraz indeks ca�kowity i z przedzia�u <0;9>, 
//  a nast�pnie wstawia do elementu tablicy o indeksie i warto�� x w ten spos�b, 
//  �e aby nie straci� zawarto�ci elementu o indeksie i nale�y elementy 
// od i do 9 "rozsun��" w prawo. Nale�y zadeklarowa� co najmniej 11-elementow� tablic�.

#include <stdio.h>


int main(){
    int arr[11] = {6,5,4,2,3,4,7,1,2,100};
    int num, index, temp;
    int i, j;
    do{
        printf("Podaj liczbe z zakresu <0;9> i dowolona liczbe calkowita: ");
        scanf("%d %d",&index,&num);
    } while(index < 0 || index > 9);
    temp = arr[index];
    arr[index] = num;
    for(i=11;i>=index+1;i--){
        arr[i] = arr[i-1];
        if(i==index+1){
            arr[i] = temp;
        }
    }

    for(i=0;i<11;i++){
        printf("[%d] = %d\n",i,arr[i]);
    }
}