// Napisz program, kt¢ry
//  oblicza iloczyn element¢w podzielnych przez 8 w 10-cio elementowej tablicy liczb caˆkowitych.

#include <stdio.h>


int main(){
    int arr[10] = {15,30,45,64,5,1,2,3,8,5};
    int iloczyn = 1;

    for(int i = 0; i < 10; i++){
        if(arr[i]%8==0){
            iloczyn=iloczyn*arr[i];
        }
    }
    if(iloczyn == 1){
        printf("Zadna liczba nie jest podzielna przez 8!");
    } else{
        printf("Iloczyn to %d",iloczyn);}
}