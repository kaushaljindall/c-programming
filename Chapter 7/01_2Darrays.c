#include <stdio.h>

int main(){
    int r = 3,c=3;
    // int arr[r][c] ;
    int arr[2][2];
    int count = 1;

  for(int i= 0; i<2 ;i++){
    for(int j = 0; j<2 ; j++){
        arr[i][j] = count;
        count++;
    }
  }

  //printing
  for(int i = 0; i< 2 ;i++){
    for(int j = 0; j<2 ; j++){
        printf("%d" , arr[i][j]);
    }
    printf("\n");
  }
}
     