// Ques : Write a program to Print the transpose of the matrix entered by the user. (Leetcode - 867)

#include <stdio.h>
int main(){
    int mat1[3][2];
    int count =1;
    int mat2[2][3];

    for(int i=0; i<3 ; i++){
        for(int j = 0; j<2; j++){
            mat1[i][j] = count;
            count++;
        }
    }
    
    printf("BEFORE TRANSPOSE\n");
    for(int i=0; i<3 ; i++){
        for(int j = 0; j<2 ; j++){
          printf("%d ", mat1[i][j]);
        }
    printf("\n");
    }

    for(int i=0; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
          mat2[i][j]  = mat1[j][i];
        }
    }

    printf("AFTER TRANSPOSE\n");
     for(int i=0; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
          printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }


}