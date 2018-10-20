// Napisz program, kt¢ry wpisuje do kolejnych element¢w tablicy
//  20-to elementowej kolejne pot©gi liczby n, pocz¥wszy od n^0. Liczb© n nale¾y wczyta† z klawiatury. 
// Pot©gowanie nale¾y zrealizowa† za pomoc¥ wielokrotnego mno¾enia.

#include <stdio.h>


int main(){
    int arr[20] = { NULL };
    int number;
    int times;
    int i;
    printf("Podaj ile poteg chcesz zobaczyc: ");
    scanf("%d",&times);

    for(i=0;i<times;i++){
        if(i==0){
            number = 1;
        } else{
            number = number * 2;
        }
        arr[i] = number;
    }

    for(i=0;i<times;i++){
        printf("[%d]=%d\n",i,arr[i]);
    }
}