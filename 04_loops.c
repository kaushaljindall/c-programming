#include<stdio.h>
int main(){
    // for (int i = 0; i < 11 ;i++ ){
    //     printf("%d \n" , i);
    // }
    // int i = 0;
    // while(i <= 5){
    //     printf("%d \n" , i );
    //     i++;
    // }
    int n ; 
    do{
        printf("Enter the number: ");
        scanf("%d" ,&n);
        if (n%7 == 0){
            continue;
        printf("%d" , n);
        }
    }while(1);
    return 0;
}