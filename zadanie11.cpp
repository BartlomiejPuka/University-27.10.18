// Napisz program, kt¢ry wstawia dowoln¥ liczb© zmiennoprzecinkow¥ 
// do posortowanej tablicy 10-cio elementowej o elementach 
// -5,5; -1,2; 0; 0; 1,4; 3,5; 6,8; 10; 10; 14,5. tak, aby tablica byˆa 
// nadal posortowana bez sortowania caˆego wektora . 
// Nale¾y zadeklarowa† tablic© 11-to elementow¥, ¾eby wstawiany element si© zmie˜ciˆ.

#include <stdio.h>

int main(){
    float x[11] = {-5.5, -1.2, 0, 0, 1.4, 3.5, 6.8, 10, 10, 14.5};
    float num;  
    int i, j;
    int notadded = 1;
    float temp;
    float stemp;
    printf("Podaj liczbe: ");
    scanf("%f",&num);
    
    for(i=0;i<11;i++){
        if(x[i] <= num && x[i+1] >= num){
            temp = x[i+1];
            x[i+1] = num;
            for(j=i+2;j<11;j++){
                    stemp = x[j];
                    x[j] = temp;
                    temp = stemp;

            }
            break;
        } else if(num >= x[9]){
            x[10] = num;
        } else if(num <= x[0]){
            temp = x[0];
            x[0] = num;
            for(j=10;j>0;j--){
                x[j] = x[j-1];
                if(j==1){
                    x[j] = temp;
                }
            }
            break;
        }
    }
    for(i=0;i<11;i++){
        printf("[%d] = %.1f\n",i,x[i]);
    }
}
