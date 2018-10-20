// Napisz program, kt¢ry z dw¢ch 10-cio elementowych
//  tablic znakowych tworzy trzeci¥ zˆo¾on¥ na zmian© z element¢w to jednej, to drugiej tablicy.

#include <stdio.h>
int main(){
    char x[10] = {'a','b','c','d','e','f','g','h','j','k'};
    char y[10] = {'z','x','c','v','b','n','m','o','i','p'};
    char z[20] = { NULL };
    int xo = 0;
    int yo = 0;

    int i;
    for(i=0;i<20;i++){
        if(i%2==0){
            z[i] = x[xo];
            xo++;
        } else{
            z[i] = y[yo];
            yo++;
        }
    }

    for(i=0;i<20;i++){
        printf("[%d] = %c\n",i,z[i]);
    }
}