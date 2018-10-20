// Napisz program, kt¢ry przesuwa w lewo o jedn¥ pozycj© zawarto˜† tablicy 
// 10-cio elementowej liczb caˆkowitych tzn. dla element¢w i=0,..,8 t[i] 
// po wykonaniu programu ma mie† warto˜† t[i+1], a element t[9] warto˜† t[0].
//  Program ma u¾ywa† tylko jednej tablicy.


#include <stdio.h>

int main(){
    int temp;
    int i;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int play = 1;
    int move;

    while(play){
        printf("Przesunac? 1/0: ");
        scanf("%d",&move);
        if(move){
            temp = arr[0];
            for(i = 0; i < 10; i++){
                if(i != 9){
                arr[i] = arr[i+1];
                } else {
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