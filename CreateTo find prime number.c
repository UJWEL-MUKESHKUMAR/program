#include<stdio.h>

 void main()
 	{
 		int a,b,flag;

 		printf("\n Enter the range of numbers (a<b)");
 		scanf("%d%d",&a,&b);
 		printf("\n Prime numbers between %d and %d is: ",a,b);

 		for(int i=a;i<=b;i++)
 			{
 				flag=0;

 				for(j=2;j<=n/2;j++)
 	    				{
 						if(i%j==0)
 							{
 								flag=1;
 								break;
 							}
 					}

 				if(flag==0 && i!=1)
 					printf("\n %d",i);

 			}

 	}
