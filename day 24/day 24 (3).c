#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0, max = 0;

    printf("Enter sentence: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            count++;
        else {
            if(count > max)
                max = count;
            count = 0;
        }
    }

    if(count > max)
        max = count;

    printf("Longest word length = %d", max);

    return 0;
}
