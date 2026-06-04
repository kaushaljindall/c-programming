#include <stdio.h>
int main(){
    int sell , cost;
    scanf("%d %d" , &sell , &cost);
    int profit = sell - cost ;
    if (cost > sell){
        profit = cost-sell;
        printf("loss of $%d" , profit);
    } else if (cost == sell){
        printd("NO PROFIT NO LOSS");
    }
    else{
        printf("profit of $%d" , profit);
    }
}