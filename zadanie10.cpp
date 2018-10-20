// Napisz program, kt¢ry zamienia liczb© caˆkowit¥ dziesi©tn¥ na system dw¢jkowy 
// (bez u¾ycia funkcji matematycznych dost©pnych w C i formatu binarnego) .

#include <stdio.h>

int main(){
    int num = 676;
    char result[10] = {NULL};
    int i = 0;
    int index;
    int dec = num;


    do{
        if(num%2==1){
            num = num-1;
            num = num/2;
            result[i] = '1';

        } else{
            num = num/2;
            result[i] = '0';
        }
        if(num==1){
            result[i+1] = '1';
        } else if(num==0){
            result[i+1] = '0';
        }
        // printf("%d %c\n",num, result[i]);
        i++;
        index = i+1;
    } while(num!=1);

    for(i=index;i>=0;i--){
        printf("%c",result[i]);
    }

}