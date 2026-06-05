// Ques : Find the maximum value out of all the elements in the array.

#include <stdio.h>
int main(){
    int arr[6]= {3,68,78,86,45,32};
    int gratest = arr[0];
    for(int i= 0; i < 6; i++){
        if (arr[i]> gratest){
            gratest = arr[i];
        }
    } 
    printf("gratest number: %d" , gratest);
}