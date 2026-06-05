# include <stdio.h> 

int factorial(int n){
    int fact = 1;

    for(int i=1 ; i<=n ; i++){
        fact*= i; 
    }
    return fact;
}

int npr(int n  , int r){
    int nfact = factorial(n);
    int nrfact = factorial(n-r);

    return nfact /nrfact;
}

int main(){
    int a,b;
    scanf("%d %d" , &a ,&b ) ;
    printf("nPr : %d" , npr(a,b));
}