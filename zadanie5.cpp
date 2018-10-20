// Napisz program, kt¢ry z dw¢ch 10-cio elementowych posortowanych tablic 
// liczb zmiennoprzecinkowych tworzy trzeci¥ r¢wnie¾ posortowan¥.
//  Nale¾y wykorzysta† fakt posortowania tablic 10-cio elementowych (
// do trzeciej tablicy, kolejne elementy maj¥ by† wstawiane od razu we wˆa˜ciwym miejscu tej tablicy).


#include <stdio.h>

int main(){
    float x[10] = {1.1,2.3,4.3,5.4,6.7,9.9,10.1,10.2,10.3,12.5};
    float y[10] = {0.2,0.5,4.4,4.5,5.9,6.9,7.2,8.1,9.2,10.1};
    float z[20] = { NULL };

    int xo = 0;
    int yo = 0;

    for(int i = 0; i < 20; i++){
        if(xo <= 9 && yo <= 9){
            if(x[xo] > y[yo]){
                z[i] = y[yo];
                yo++;
            } else if(x[xo] < y[yo]){
                z[i] = x[xo];
                xo++;
            } else{
                z[i] = x[xo];
                z[i+1] = y[yo];
                xo++;
                yo++;
                i++;
            }
        } else{
            if(xo <= 9){
                z[i] = x[xo];
                xo++;
            } else {
                z[i] = y[yo];
                yo++;

            }
        }
    }

    for(int i = 0; i < 20; i++){
        printf("[%d] = %.1f\n",i,z[i]);
    }

    
}