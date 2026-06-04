#include <stdio.h>

float avg() {
    int x1, x2, x3, x4, x5;

    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

    float average = (x1 + x2 + x3 + x4 + x5) / 5.0;

    return average;
}

char grade(float average) {
    char g;

    if (average >= 90)
        g = 'A';
    else if (average >= 80)
        g = 'B';
    else if (average >= 70)
        g = 'C';
    else if (average >= 50)
        g = 'D';
    else
        g = 'F';

    return g;
}

int main() {
    float average = avg();

    printf("Average = %.2f\n", average);
    printf("Grade = %c\n", grade(average));

    return 0;
}