#include<stdio.h>
 #include<math.h>

 void main()
 	{
 		float angle;

 		printf("\n Enter the angle");
 		scanf("%f", &angle);

 		printf("\n sin(%f)=%f  cos(%f)=%f", angle, sin((angle*3.141592654/180)), angle, cos((angle*3.141592654/180)));

 	}
