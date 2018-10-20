// Napisz program, kt¢ry z dw¢ch 10-cio elementowych tablic liczbowych tworzy trzeci¥ w ten spos¢b, 
// ¾e jej kolejne elementy zawieraj¥ na zmian© dwa elementy z jednej tablicy i dwa z drugiej.

#include <stdio.h>

int main(){
    int x[10] = {0,1,2,3,4,5,6,7,8,9};
    int y[10] = {9,8,7,6,5,4,3,2,1,0};
    int z[20] = {NULL};
    int xo = 0;
    int yo = 0;

    for(int i = 0 ; i < 20; i=i+4){
        z[i] = x[xo];
        z[i+1] = x[xo+1];
        xo=xo+2;
    }

    for(int i = 2; i < 20; i=i+4){
        z[i] = y[yo];
        z[i+1] = y[yo+1];
        yo=yo+2;
    }

    for(int i = 0; i < 20; i++){
        printf("[%d] = %d\n",i, z[i]);
    }
}