
#include <stdio.h>
int main()
{
int i,j,a[7]={2,1,3,-4,1,-2,-1},sum=0,maximum_sum=0;
for (i=0;i<7;i++)
{
sum = sum+a[i];
if(maximum_sum>sum)
{
continue;
}
else if(maximum_sum<sum)
{
maximum_sum=sum;
}
    
}
printf("Maximum subarray sum is: %d", maximum_sum);
return 0;
}
