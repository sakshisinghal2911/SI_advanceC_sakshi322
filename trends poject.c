// Online C compiler to run C program online
#include <stdio.h>
int main()
{
int entityId[100], quantity[100];
char productName[100][50];
char feature[100][100];
float mrp[100], discount[100];

int n = 0, choice, i, m;
float amount, total;

while(1)
{
 printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
printf("1. Add Item(s)\n");
printf("2. Display Inventory\n");
printf("3. Generate E-Receipt\n");
printf("4. Exit\n");
printf("Enter Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("How many items do you want to add? ");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("\nItem %d Details\n",n+1);
printf("Enter Entity ID : ");
scanf("%d",&entityId[n]);

printf("Enter Product Name : ");
scanf("%s",productName[n]);

printf("Enter Quantity : ");
scanf("%d",&quantity[n]);

printf("Enter MRP : ");
scanf("%f",&mrp[n]);

printf("Enter Discount (%%) : ");
scanf("%f",&discount[n]);

printf("Enter Product Feature : ");
scanf(" %[^\n]",feature[n]);
n++;
}
printf("\nItems Added Successfully.\n");
break;

case 2:
if(n==0)
{
printf("\nInventory Empty!\n");
}
else
{
printf("\n--------------------------------------------------------------------------------\n");
printf("ID\tName\tQty\tMRP\tDiscount\tFeature\n");
printf("--------------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
printf("%d\t%s\t%d\t%.2f\t%.2f\t\t%s\n",
entityId[i],
productName[i],
quantity[i],
mrp[i],
discount[i],
feature[i]);
}
}
break;

case 3:

if(n==0)
{
printf("\nNo Items Available.\n");
}
else
{
total = 0;

printf("\n==================== E-RECEIPT ====================\n");
printf("ID\tProduct\tQty\tFinal Amount\n");
printf("---------------------------------------------------\n");

for(i=0;i<n;i++)
{
amount = quantity[i] * mrp[i];
amount = amount - (amount * discount[i] / 100);

printf("%d\t%s\t%d\t%.2f\n",
entityId[i],
productName[i],
quantity[i],
amount);

total += amount;
}

printf("---------------------------------------------------\n");
printf("Total Bill : %.2f\n",total);
printf("===================================================\n");
}
break;

case 4:
printf("Program Ended.\n");
return 0;

default:
printf("Invalid Choice!\n");
}
  }
}
