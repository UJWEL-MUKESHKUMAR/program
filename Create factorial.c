#include<stdio.h>

 void main()
 	{
 		int num;

 		printf("\n Enter number whose factorial is to be found: ");
 		scanf("%d", &num);

 		for(int i=1;i<num;i++)
 			{
 				num*=i;
 			}

 		printf("\n Factorial = %d", num);

 	}
