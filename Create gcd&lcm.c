#include <stdio.h>
 Void main()
   {
     int num1, num2, gcd, lcm, r, n, d; /*r=remainder n=numerator d=denomenator*/
     printf("Enter 2 number \n");
     scanf("%d%d",&num1, &num2); 
     if (num1>num2)
      {
        n=num1;
        d=num2;
      }
     else
       {
         n=num2; 
         d=num1;
       }
     r=n%d;
     while(r!=0)
      {
        n=d;
        d=r;
        r=n%d;
      }
     gcd=d;
     lcm=(num1*num2)/gcd; 
     printf("Gcd of %d and %d = %d\n",num1, num2, gcd); 
     printf("lcm of %d and %d = %d\n",num1, num2, lcm); 
   }
