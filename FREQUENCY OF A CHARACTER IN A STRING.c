#include<stdio.h>
int main() {
    char str[100],ch;
    int i,count=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]==ch) {
            count++;
        }
        printf("The frequency of '%c' in the string is: %d\n", ch, count);
        return 0;
    }