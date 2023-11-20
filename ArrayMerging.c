#include<stdio.h>
void main()
{
 int n1,n2,n3;
 printf("Enter the number of  elements in first  array:");
 scanf("%d",&n1);
 int arr1[n1];
printf("Enter the elements of first array in ascending order:");
      for(int i=0;i<n1;i++)
       {
            scanf("%d",&arr1[i]);
       }
printf("Enter the number of  elements in second  array:");
 scanf("%d",&n2);
 int arr2[n2];
printf("Enter the elements of second array in ascending order :");
       for(int i=0;i<n2;i++)
        {
          scanf("%d",&arr2[i]);
        }
  n3=n1+n2;
  int  arr3[n1+n2];
  int i=0,j=0,k=0;
  while(i<n1 && j<n2)
  {
          if(arr1[i]<arr2[j])
            {
              arr3[k++]=arr1[i++];
            }
          else
            {
              arr3[k++]=arr2[j++];
            }
  }
  while(i<n1)
  {
    arr3[k++]=arr1[i++];
  }
  while(j<n2)
  {
   arr3[k++]=arr2[j++];
  }
  printf("Merged array is \n");
 
  for(int i=0;i<n3;i++)
   printf("%d \t ",arr3[i]);
}
  
  
