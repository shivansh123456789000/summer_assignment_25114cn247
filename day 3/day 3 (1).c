#include <stdio.h>
int main(){
   int n , prime =1;
   printf("enter a prime number : \n");
    scanf("%d",&n);
    for(int i=2 ; i<n ; i++){
         if(n%i==0){
              prime = 0;
              break;
         }
    if(prime == 1){
         printf("is a prime number");
    }
    else{
         printf("is not a prime number");
    }
    return 0;
    }
}