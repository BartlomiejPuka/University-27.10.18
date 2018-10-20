// Napisz program, kt¢ry przesuwa w prawo o jedn¥ pozycj© zawarto˜† tablicy 10-cio elementowej 
// liczb caˆkowitych tzn. dla element¢w i=0,..,8 t[i+1] po 
// wykonaniu programu ma mie† warto˜† t[i], a element t[0] warto˜† t[9]. 
// Program ma u¾ywa† tylko jednej tablicy.

#include <stdio.h>

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int i;
    int move;
    int play = 1;
    int temp;
    
    while(play){
        printf("Przesunac? 1/0: ");
        scanf("%d",&move);
        if(move){ 
        temp = arr[9];
        for(i=9;i>=0;i--){
            if(i != 0){
            arr[i] = arr[i-1];
            } else{
                arr[i] = temp;
                }
            }
        }

        for(i=0;i < sizeof(arr)/sizeof(int);i++){
        printf("[%d] = %d \n",i, arr[i]);
        }   

        printf("Zakonczyc? 1/0:");
        scanf("%d",&play);
        play = !play;
    }
}
