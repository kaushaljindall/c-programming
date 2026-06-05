// Ques : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.


#include <stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8} ;
    for(int i = 0; i < 8 ; i++){
        if(i%2 == 0){
            arr[i]+= 10;
        } else {
            arr[i]*=2;
        }
    }
    for (int i=0 ; i < 8;i++){
        printf("%d ",arr[i]);
    }
}