#include <stdio.h>
 #include <math.h>
 void main ()
   {
     int i;
     float a[50],mean, std ,variance sum=0, sum1=0,n;
     Printf("Enter the value of n\n");
     scanf("%d",&n); 
     printf("Enter %d real number \n",n); 
     for(i=0;i<n;i++)
      {
        scanf("%f",&a[i]);
       }
 /*compute the sum of all elements */
     for(i=0;i<n;i++)
       {
         sum+=a[i];
        }
     mean=sum/n;
 /*compute variance and standard deviation */
    for(i=0;i<n;i++)
      {
        sum1=sum1+pow((a[i])-mean, 2);
      }
     variance =sum1/n;
     std=sqrt(variance);
     printf("mean of all elements =%f\n",mean); 
     printf("variance of all elements =%f\n",variance);
     printf("standard deviation of all elements =%f",std);
   }
