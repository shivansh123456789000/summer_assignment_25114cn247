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
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            }
            
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++){
        printf("%d", array[i]);
    }

}