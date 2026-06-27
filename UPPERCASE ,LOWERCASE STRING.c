#include<stdio.h>
int main() {
    char str[100];
    int i,choice;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("1.uppercase\n2.lowercase\nenter choice");
    scanf("%d",&choice);
    if (choice==1){
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; 
        }
            printf("uppercase string: %s",str);
 }
 else if(choice == 2){
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; 
        }
        printf("lowercase string: %s",str);
    }
        return 0;
    }