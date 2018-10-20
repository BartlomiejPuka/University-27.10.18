// Napisz program, kt¢ry oblicza ˜redni¥ 
// arytmetyczn¥ element¢w podzielnych przez 15 w 10-cio elementowej tablicy liczb caˆkowitych.

#include <stdio.h>


int main(){
    int arr[10] = {15,30,45,60,5,1,2,3,4,5};
    float sum;
    float counts;
    float avg;

    for(int i = 0; i < 10; i++){
        if(arr[i] % 15 == 0){
            sum = sum + arr[i];
            counts++;
        }
    }

    avg = sum/counts;
    printf("Srednia arytmetyczna to %.1f",avg);

}