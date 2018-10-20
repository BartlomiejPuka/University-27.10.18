// Napisz program, kt¢ry z dw¢ch 10-cio elementowych
//  tablic znakowych tworzy trzeci¥ zawieraj¥c¥ sp¢ˆgˆoski z tych tablic.


#include <stdio.h>

// a, e, y, i, o, ¥, © oraz u - ¢
char x[10] = {'a','b','c','d','e','©','g','h','o','p'};
char y[10] = {'q','w','e','r','t','y','o','u','¢','k'};
char z[20] = {NULL};
int zo = 0;
int samogloski[10] = {97,101,121,105,111,165,169,117,162,243};
int main()
{
    for(int i = 0; i < 10; i++){
        if(int(x[i]) != 97 &&
            int(x[i]) != 101 &&
            int(x[i]) != 121 &&
            int(x[i]) != 105 &&
            int(x[i]) != 111 &&
            int(x[i]) != 165 &&
            int(x[i]) != 169 && 
            int(x[i]) != 117 &&
            int(x[i]) != 162 &&
            int(x[i]) != 243 &&
            int(x[i]) != -87){
                z[zo] = x[i];
                zo++;
            } else if(int(y[i]) != 97 &&
            int(y[i]) != 101 &&
            int(y[i]) != 121 &&
            int(y[i]) != 105 &&
            int(y[i]) != 111 &&
            int(y[i]) != 165 &&
            int(y[i]) != 169 && 
            int(y[i]) != 117 &&
            int(y[i]) != 162 &&
            int(y[i]) != 243 &&
            int(y[i]) != -94 &&
            int(y[i]) != -87){
                z[zo] = y[i];
                zo++;

            }
    }

    for(int i  = 0 ; i < sizeof(z)/sizeof(char);i++){
        printf("%c %d\n",z[i],i);
    }

}