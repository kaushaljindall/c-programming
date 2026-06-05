#include <stdio.h>
int main(){
    int arr[6]= {3,68,78,86,45,32};
    int gratest = arr[0];
    int second = arr[0];
    // for(int i= 0; i < 6; i++){
    //     if (arr[i]> gratest){
    //         gratest = arr[i];  // I have greatest from array
    //     }
    // } 
    // for(int i =0 ; i < 6 ; i++){
    //     if (second < arr[i] && arr[i] != gratest)
    //     second = arr[i];
    // }

     for(int i= 0; i < 6; i++){
        if (arr[i]> gratest){
            second = gratest;
            gratest = arr[i];
        }
    } 

    
    printf("second greatest number: %d" , second);
}