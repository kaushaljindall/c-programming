#include <stdio.h>
int main(){
    int sum = 0;
    int mat[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
    for(int i=0 ; i<3; i++){
        for(int j=i; j >= i; j++){
            sum += mat[i][j];
        }
    }
    printf("%d", sum);
}