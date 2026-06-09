#include <stdio.h>
int main(){
    int roll, marks;

    //rows
    printf("Enter the number of studrnts: ");
    scanf("%d" , &roll);

    //col
    printf("enter the subjects: ");
    scanf("%d", &marks);

    int record[roll][marks];

    for(int i = 0 ; i < roll; i++){
        for(int j = 0 ; j < marks ; j++){
            printf("enter the marks of rollno %d of subjectID %d: ", i+1 , j+1);
            scanf("%d" , &record[i][j]);
        }
    }

    printf("\nRecord:\n");

    for (int i = 0; i < roll; i++) {
        for (int j = 0; j < marks; j++) {
            printf("%d ", record[i][j]);
        }
    printf("\n");
    }
}

