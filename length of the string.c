#include<stdio.h>
int main()
{
    char str[100];
    int i,len=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of the string is: %d",len);
return 0;
}