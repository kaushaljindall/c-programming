#include <stdio.h>

int main(){
    for(int i = 1 ; i < 5 ; i++){
        int count = i;
        for (int j =0 ; j < i ; j++){
            printf("%d " , count);
            count--;
        }
    printf("\n");
    }
}

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
