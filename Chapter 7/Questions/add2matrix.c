#include <stdio.h>
int main (){
   // Ques : Write a program to add two matrices.

   int r , c;
   scanf("%d" , &r);
   scanf("%d" , &c);

   int mat1[r][c] , mat2[r][c];

   for(int i = 0;i<r ; i++){
    for( int j= 0 ; j < c ; j++){
        scanf("%d" ,&mat1[i][j]);
        scanf("%d" ,&mat2[i][j]);
    }
   }

   for(int i = 0;i<r ; i++){
    for( int j= 0 ; j < c ; j++){
        printf("%d " ,mat1[i][j]+mat2[i][j]);
    }
    printf("\n");
   }

}