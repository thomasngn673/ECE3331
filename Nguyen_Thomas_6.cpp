/* 	PROGRAMMING ASSIGNMENT 05
	Thomas Nguyen
	February 28th, 2021 */

#include <stdio.h>
#include <stdlib.h>

int main (void){
	FILE *inputf_ptr;
	FILE *outputf_ptr;
	inputf_ptr = fopen("input.txt", "r");
	outputf_ptr = fopen("output.txt","w");

	char c;
	int flag;
	int asc;
	while(fscanf(inputf_ptr,"%c",&c) != EOF){
		int asc = (int)c;
		printf("%i\n",asc);
		if(asc>=33 & asc<=58){
			flag = 1;
		}
		if(asc>=59 & asc<=68){
			flag = 2;
		}
		if(asc == 69){
			flag = 3;
		}
		if(asc == 70){
			flag = 4;
		}
		if(asc == 71){
			flag = 5;
		}		
		if(asc<33 | asc>71){
			asc = -1;
		}
		
		switch(flag) {
			case 1:
				asc = asc + 64;
				break;
			case 2:
				asc = asc - 11;
				break;
			case 3:
				asc = asc - 32;
				break;
			case 4:
				asc = asc - 24;
				break;
			case 5:
				asc = asc - 61;
				break;
			default:
				asc = -1;			
		}
		
		fprintf(outputf_ptr,"%c",asc);
	}
	
	// fprintf(outputf_ptr,"%c", c); // fprintf input values

}
