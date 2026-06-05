#include <stdio.h>
void func(int arr[]){
    arr[0] = 3;
}
int main(){
    int arr[5]= {1,2,3,4,5};
    printf("%d\n", arr[0]);           // 1
    func(arr);
    printf("%d\n", arr[0]);          // 3
} 