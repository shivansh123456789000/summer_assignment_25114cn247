#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        flag = 0;

        for(j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%c", str[i]);
    }

    return 0;
}