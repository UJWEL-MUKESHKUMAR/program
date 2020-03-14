#include <stdio.h>
 #include <math.h>
 void main()
  {
    int n; 
    float r
    printf("\nEnter your choice \n1. Circle\n2.rectangle\n3.triangle");
    scanf("%d",n) ;
    switch(n)
     {
       case1 :
          printf("\nEnter the radius of circle");
          scanf("%f",&r); 
          printf("surface area =%f perimeter =%f",2*3.14*r,3.14*r*r);
          break; 
       case2 :
          printf("\nEnter the length and breadth of rectangle ");
          scanf("%f%f",&l, &b); 
          printf("area=%f perimeter=%f",l*b,2*(l+b));
          break;
        case3 :
          printf("\n Enter sides of triangle ");
          scanf("%f%f%f",&a, &b, &c); 
          s=(a+b+c)/2;
          printf("\nArea =%f",sqrt(s*(s-a) *(s-b) *(s-c))); 
          break; 
      }
   }
