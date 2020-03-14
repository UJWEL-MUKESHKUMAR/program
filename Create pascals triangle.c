#include <stdio. h>
 void main ()
  {
    int row, coed=1,s,i,j;
    printf("Enter number of rows :");
    scanf("%d",&row); 
    for(i=0;i<row;i++)
     for(s=1;s<row;s++)
       printf("  ");
     for(j=0;j<=i; j++);
      { 
        if (j==¡¡==0)
          coef=1;
        else
          coef=coef*(i-j+1)/j; 
         printf("%d",coef); 
       }
  }
