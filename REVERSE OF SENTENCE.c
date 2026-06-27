#include<stdio.h>
int reverse()
{ 
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    {
        reverse();
        printf("%c",ch);
    }
}
int main()
{
    printf("enter a sentence: ");
    reverse();
    printf("\n");
    return 0;
}

