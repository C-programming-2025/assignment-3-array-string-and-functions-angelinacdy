// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    printf("Enter the character to count: ");
    scanf(" %c", &ch);    

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' occurs %d time(s) in the string.\n", ch, count);
    return 0;
}
