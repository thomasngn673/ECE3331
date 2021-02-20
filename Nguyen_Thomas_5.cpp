/* 	PROGRAMMING ASSIGNMENT 05
	Thomas Nguyen
	February 21th, 2021 */

#include <stdio.h>

int main (void){
	FILE *file_ptr;
	file_ptr = fopen("logictable.txt", "w");
	
	// fprintf header-lines
	fprintf(file_ptr, "w\tx\ty\tz\t(w&&x)||(x&&y)||(y&&z)");
	fprintf(file_ptr, "\n------------------------------------------------------\n");
	
	char TF;
	int w, x, y, z;
	
	for(w=0;w<2;w++){
		for(x=0;x<2;x++){
			for(y=0;y<2;y++){
				for(z=0;z<2;z++){		
					if((w==1 & x==1) | (x==1 & y==1) | (y==1 & z==1)){
						TF = 'T';
					}
					else{
						TF = 'F';
					}
					fprintf(file_ptr,"%d\t%d\t%d\t%d\t\t%c\n",w,x,y,z,TF); // fprintf input values
				}
			}
		}
	}
}
