#include <stdio.h>
int main(){
    int n,i,j;
    printf("size of array :");
    scanf("%d", &n);
    int array[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    int temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
            
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++){
        printf("%d", array[i]);
    }

}