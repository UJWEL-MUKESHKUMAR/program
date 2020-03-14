#include <stdio. h>
 #include <math. h>
 void main()
   {
     int n; 
     float f, n, d,sum,r
     printf("Enter your choice \n1.Arithematic progression \n2. Geometric progression \n3.Harmonic progression ");
     scanf("%d",&n); 
     switch(n)
      {
        case1 :
          printf("Enter first term, common difference, number of terms ");
          scanf("%f%f%f",&f, &d, &n);
          sum=(n/2)*(2*f+(n-1) *d); 
          printf("The sum of %f terms in ap",n, sum); 
          break; 
        case2 :
          printf("Enter first term, ratio, number of terms\n");
          scanf("%f%f%f",&f, &r, &n);
          if(r>1)
           sum=(f*(pow(r,n)-1)r-1);
          else
           sum=(f*(1-(pow(r,n))1-r); 
          printf("\nThe sum of %f terms in Gp =%f",n, sum); 
          break; 
        case3 :
           printf("\nEnter the number of terms ");
           scanf("%f",&n); 
            for(i-0;i<=n; i++)
              {
                sum+=(1/i);
               }
           printf(\nThe sum of %f terms in hp=%f",n, sum); 
           break; 
        defaultcase :printf("invalid code");
     }
