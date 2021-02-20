/* 	PROGRAMMING ASSIGNMENT 03
	Thomas Nguyen
	February 7th, 2021 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *file_ptr;
	file_ptr = fopen("out.txt", "w");
	char c;
	float num;
	int ft = 1; // first time
	
	while (1) {
		// FIRST TIME LOOP ITERATION
		if (ft == 1) { // created to address formatting and newlines errors when looping
			printf("Would you like to enter a complete name and account balance? (y/n)\n");
			scanf("%c", &c); // read input
			if (c == 'y'){
				printf("Enter a complete name (lastname, firstname):\n");
				scanf("%c", &c); // "absorb" '\n' char from pressing enter after entering 'y'
				do {
					scanf("%c", &c);
//					printf("%c", c);
					if (c != '\n'){
						fprintf(file_ptr, "%c", c);
					}
				} while(c != '\n'); // complete this loop until newline is detected
				fprintf(file_ptr, ": $");

				printf("Enter the account balance:\n");
				do {
					scanf("%f%c", &num, &c);
//					printf("%f", num);
					fprintf(file_ptr, "%f", num);					
				} while(c != '\n'); // complete this loop until newline is detected
			}
			
			if (c == 'n'){
				printf("No new information has been input...FILE READY!");
				return 0; // end program
			}
		}
		ft = 0;
	
		// ALL TIMES AFTER FIRST TIME
		if (ft == 0) {
			printf("\nWould you like to enter a complete name and account balance? (y/n)\n");
			fprintf(file_ptr, "\n"); // output a newline everytime a new person's information is input
			scanf("%c", &c); // read input
			if (c == 'y'){
				printf("Enter a complete name (lastname, firstname):\n");
				scanf("%c", &c); // "absorb" '\n' char from pressing enter after entering 'y'
				do {
					scanf("%c", &c);
//					printf("%c", c);
					if (c != '\n'){
						fprintf(file_ptr, "%c", c);
					}
				} while(c != '\n'); // complete this loop until newline is detected
				fprintf(file_ptr, ": $");

				printf("Enter the account balance:\n");
				do {
					scanf("%f%c", &num, &c);
//					printf("%f", num);
					fprintf(file_ptr, "%f", num);					
				} while(c != '\n'); // complete this loop until newline is detected
			}
			
			if (c == 'n'){
				printf("No new information has been input...FILE READY!");
				return 0; // end program
			}		
		}
	}
}
