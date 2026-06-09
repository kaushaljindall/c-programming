#include <stdio.h>
int main(){
    for(int i =1 ; i < 6 ; i++){
        for(int j= 1 ; j <=i ; j++){
            if(i%2 ==0){
                printf("%c " , j+64);
            }else {
                printf("%d " , j);
            }
        }
        printf("\n");
    }
}


// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5