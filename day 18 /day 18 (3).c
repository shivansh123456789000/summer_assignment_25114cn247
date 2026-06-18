#include<stdio.h>
int main(){
    int n,i,first,last,middle,search;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    printf("enter the elements to be searched :");
    scanf("%d", &search);
    first=0;
    last=n-1;
    
    while(first <=last){
        middle=(first+last)/2;
        if(array[middle]==search){
            printf("element found at the index %d ", middle);
            return 0;
        }
        else if (search> array[middle]){
            first=middle+1;

        }
        else{
            last= middle-1;
        }
    }
    printf("elements not found");
    return 0;
}