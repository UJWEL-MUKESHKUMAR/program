#include<stdio.h>

 void main()
 	{
 		int t1=0,t2=1,t3,n,count=0;

 		printf("\n Enter the number of terms: ");
 		scanf("%d",&n);

 		printf(" First %d Fibonacci numbers are: ", n);
 		printf("\n %d \n", t1);
 		printf("\n %d \n", t2);

 		count=2;

 		while(count<n)
 			{
 				t3=t1+t2;
 				count++;

 				printf("%d \n",t3);

 				t1=t2;
 				t2=t3;
 			}

 	}
