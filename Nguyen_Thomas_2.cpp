/* 	PROGRAMMING ASSIGNMENT 02
	Thomas Nguyen
	January 31st, 2021 */

#include <stdio.h>
#include <math.h>

int main(void){
	// Initialize all variables
	float isum; // sum of integers
	float avg;
	int ilarge; // largest integer
	int ismall; // smallest integer
	int inum = 0; // number of integers
	int ienter = 0;
	int iret = 1;
	
	printf("Enter an integer one at a time, followed by the Enter key, and Ctrl-Z once you are finished entering:\n");
	iret = scanf("%d", &ienter); // read input into 1st number
	ilarge = ienter; // set input as largest number
	isum = ilarge; // add 1st number to sum
	
	if(iret<1){ // if the user inputs no values and only Ctrl-Z
		printf("You have not entered any values.");
		return 0; // end program
	}
	
	while(iret==1){ // execute this loop while 1st number is not Ctrl-Z
		iret = scanf("%d", &ienter); // read input into 2nd number
		
		// FIRST LOOP - this is needed to intialize 'ismall' (similar to how 'ilarge' was initialized before the 'while' loop)
		if(inum==0 & ilarge>=ienter){ // if first loop & (1st number > 2nd number)
			ismall = ienter; // set 2nd number to 'ismall'
		}
		if(inum==0 & ilarge<=ienter){ // if first loop & (1st number < 2nd number)
			ismall = ilarge; // set 1st number to 'ismall'
			ilarge = ienter; // set 2nd number to 'ibig'
		}
		
		// FOLLOWING LOOPS
		if(ienter>=ilarge & inum>0){
			ilarge = ienter;
		}
		if(ienter<=ismall & inum>0){
			ismall = ienter;
		}
		
		inum = inum + 1; // another integer has been input
		if(iret==1) // needed or else isum is added an extra time
			isum = isum + ienter;
	}
	printf("\nLARGEST NUMBER: %d\n", ilarge);
	printf("SMALLEST NUMBER: %d\n", ismall);
	printf("NUMBER OF INTEGERS: %d\n", inum);
	avg = isum/inum;
	printf("AVERAGE OF INTEGERS: %f\n", avg);
}
