#include <stdio.h>
int main()
{ int length=0;
    char str[100];
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[length] != '\0')
    {
        length++;
        
    }
    printf("length of the string is: %d", length-1);
    return 0;
}