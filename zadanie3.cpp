// Napisz program, kt¢ry w tablicy liczb caˆkowitych 10-cio elementowi wypisuje liczb©, 
// kt¢ra najcz©˜ciej wyst©puje w tej tablicy oraz podaje krotno˜† jej wyst©powania i indeks w tablicy,
//  pod kt¢rym liczba ta wyst©puje po raz pierwszy.


#include <stdio.h>

int main(){
    int arr[10] = {1,3,5,4,4,5,5,5,3,5};
    
    int index;
    int i, j;
    int counts = 0;

    int number;
    int number_of_occurence;
    int num_index;
    int max = 0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[i]==arr[j]){
                index = i;
                counts++;
            }
        }
    if(counts > max){
        max = counts;
        number = arr[i];
        number_of_occurence = counts;
        num_index = index;
    }
    counts = 0;
    }
    printf("%d occured %d first time %d\n",number,number_of_occurence,num_index);
    
    
}