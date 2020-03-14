#include <stdio.h>
 void main ()
  {
    int num, i=1;
    printf("Enter the number ");
    scanf("%d",&num); 
    printf("multiplication table of %d:\n",num); 
    printf("....\n");
    while(i<=10)
    {
      printf("%d*%d=%d\n",num, i, num*i);
      i++;
    }
 }
