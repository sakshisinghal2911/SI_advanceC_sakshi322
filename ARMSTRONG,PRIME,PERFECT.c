#include<stdio.h>
int sumA=0; {
    int prime(inti,intn)
{
    if(n<=1)
    return 0;
    if(i==1)
    return 1;
    if(n%i==0)
    return 0;
    return prime(i-1,n);
}
int armstrong(int n)
{
    if(n==0)
    return sumA;
    int rem=n%10;
    sumA+=rem*rem*rem;
    return armstrong(n/10);
}
int perfect(int n,int i)
{
    if(i==0)
    return 0;
    if(n%i==0)
    return i+perfect(n,i-1);
    return perfect(n,i-1);
}
int main()
{
    int n,sumP;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(prime(n,n/2))
    printf("%d is a prime number\n",n);
    else
printf("%d is not a prime number\n",n);
    sumA=0;
    if(armstrong(n)==n)
    printf("%d is an armstrong number\n",n);
    else
    printf("%d is not an armstrong number\n",n);
    sumP=perfect(n,n/2);
    if(sumP==n)
    printf("%d is a perfect number\n",n);
    else
    printf("%d is not a perfect number\n",n);
    return 0;
}