#include<stdio.h>
int main(){
    int length;
    char str[100];
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[length] != '\0')
    {
        length++;
        
    }
    int i=0, j=length-1;
    char temp;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("reversed string is: %s", str);
    return 0;
}