#include<stdio.h>
main(){
	float p,r,t;
	float i;
	printf("Enter value of Principal \t");
	scanf("%f", &p);
	printf("Enter value of Rate \t");
	scanf("%f", &r);
	printf("Enter value of Time \t");
	scanf("%f", &t);
	
	
	i=p*r*t;
	
	printf("\n\nSimple Interest is: %f" , i);
	
	
}
