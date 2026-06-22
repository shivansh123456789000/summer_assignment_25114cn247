#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0, constants=0,i;
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                constants++;
            }
        }
       printf("number of vowels: %d\n", vowels);
       printf("number of constants: %d\n", constants); 
       return 0;
}