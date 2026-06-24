#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i , j , count = 0;
    printf("enter the string :");
    scanf("%s", str);
    for (i=0; str[i]!='\0';i++){
        count=1;
        for(j=i+1; str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
            else{
                break;
            }
    }
    printf("%c%d", str[i], count);
    i= j-1;
    

}
}