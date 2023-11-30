#include<stdio.h>
void main()
{
int n,m,i,j,temp;
printf("enter the number of element in 1st array\n:");
scanf("%d",&n);
printf("enter the number of element in 2nd array\n:");
scanf("%d",&m);
int arr1[n],arr2[m],arr3[n+m];
printf("enter %d number in 1st array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr3[i]=arr1[i];
}
printf("enter %d number in 2nd array\n",m);
for(i=0;i<m;i++)
{
scanf("%d",&arr2[i]);
arr3[i+n]=arr2[i];
}
printf("\n the 1st array is\n");
for(i=0;i<n;i++)
{
printf("%d",arr1[i]);
}
printf("\n the second array is\n");
for(i=0;i<m;i++)
{
printf("%d",arr2[i]);
}
printf("\nthe element of array 1 and 2 joined is:\n");
for(i=0;i<n+m;i++)
{
printf("%d",arr3[i]);
}
printf("\n the sorted array is:\n");
for(i=0;i<n+m;i++)
{
for(j=i+1;j<n+m;j++)
{
if(arr3[i]>arr3[j])
{
temp=arr3[i];
arr3[i]=arr3[j];
arr3[j]=temp;
}
}
}
for(i=0;i<n+m;i++)
{
printf("%d",arr3[i]);
}
}
