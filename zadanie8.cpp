// Napisz program, kt¢ry posortowan¥ tablic© liczb caˆkowitych sortuje w kierunku przeciwnym. 
// Nale¾y wykorzysta† pocz¥tkowe posortowanie tablicy. W programie mo¾na u¾y† tylko jedn¥ tablic©.

#include <stdio.h>


int main(){
    int arr[11] = {0,1,2,3,4,5,6,7,8,9,100};
    int temp;
    int xo = 10;

    for(int i = 0; i < 5;i++){
        temp = arr[i];
        arr[i] = arr[xo];
        arr[xo] = temp;
        xo--;
    }

    for(int i = 0; i < sizeof(arr)/sizeof(int);i++){
        
        printf("[%d]=%d\n",i,arr[i]);
    }
}