/* 	PROGRAMMING ASSIGNMENT 04
	Thomas Nguyen
	February 14th, 2021 */

#include <stdio.h>
#include <math.h>

int main (void){
	double c,ig,error,iter,loop_num,prev;
	
	printf("Enter value c0:\n");
	scanf("%lf",&c);
	printf("Enter initial guess:\n");
	scanf("%lf",&ig);
	printf("Enter maximum error:\n");
	scanf("%lf",&error);
	printf("Enter maximum iterations:\n");
	scanf("%lf",&iter);
	
	while(loop_num<iter){
		prev = ig;
		ig = ig - ( (ig*ig*ig*ig-c)/(4*ig*ig*ig) );
		loop_num = loop_num + 1.0;
		if(fabs(ig*ig*ig*ig-c)<error){
			break;
		}
	}

	printf("\nCurrent estimate of root: x = %lf\n",ig);
	printf("Current error: %lf %%\n",(fabs((ig-prev)/ig)*100));
	printf("|f(x)|= %lf\n",fabs(ig*ig*ig*ig-c));
	printf("Number of iterations: %lf\n",loop_num);
}
