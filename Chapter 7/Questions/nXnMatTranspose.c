
// Ques : Write a program to Print the transpose of the matrix entered by the user. (Leetcode - 867)

#include <stdio.h>
int main(){
    int mat1[3][3];
    int count =1;

    for(int i=0; i<3 ; i++){
        for(int j = 0; j<3; j++){
            mat1[i][j] = count;
            count++;
        }
    }
    
    printf("BEFORE TRANSPOSE\n");
    for(int i=0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
          printf("%d ", mat1[i][j]);
        }
    printf("\n");
    }

    for(int i=0; i<3 ; i++){
        for(int j = i+1; j<3 ; j++){
        int temp ;
        temp = mat1[i][j] ;
        mat1[i][j]  = mat1[j][i];
        mat1[j][i] = temp;
        }
    }

    printf("AFTER TRANSPOSE\n");
     for(int i=0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
          printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

}