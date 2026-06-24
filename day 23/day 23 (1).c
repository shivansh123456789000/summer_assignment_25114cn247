#include<stdio.h>
int main(){
    int i,j;
    char str[100];
    printf("enter the string :");
    scanf("%s", str);
    for(i=0;str[i]!='\0';i++){
        int count=0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
            
        }
        if(count==1){
            printf("first non repeating charcter : %c", str[i]);
            break;
        }
    }
return 0;
}
