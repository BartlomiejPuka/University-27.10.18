// Napisz program, kt¢ry oblicza iloczyn 
// tylko tych element¢w caˆkowitoliczbowej tablicy 10-cio elementowej, kt¢re s¥ parzyste.

#include <stdio.h>


int main(){
    int x[10] = {2,3,5,8,9,10,4,7,3,1};
    int iloczyn = 1;

    for(int i =0 ; i < 9; i++){
        if(x[i]%2==0){
            iloczyn=iloczyn*x[i];
        }
    }
    printf("%d",iloczyn);
}