#include <stdio.h>
#include <math.h>

int main() {
FILE *fid;
double n, nstop, p, w, t1, t2, time;
int ii, c;



// start and end value
printf("This is a program will generate prime numbers and save as a text file in this folder.\nAll rights reserved. Restricted to educational use.\n");
printf("\n");
printf("Input a number to start with:\n");
scanf("%lf", &n);
	if (n<2){
		n=2;	
	}
	if (n-(int)n!=0){
		printf("Starting number should be an integer \n");
		printf("Input another number to start with:\n");
		scanf("%lf", &n);
	}
printf("Input a number to end with:\n");
scanf("%lf", &nstop);
	

ii=1;
c=1;

// Storing prime numbers
// table
fid=fopen("Prime_Numbers.txt", "w");
fprintf (fid,"N       Prime Numbers \n");
fclose(fid);


// test for prime number

	//Storing prime numbers
	fid=fopen("Prime_Numbers.txt", "a");

	// limit - unlimited to limit use while (n<=...)
	while(n<=nstop){
	
	
		
		// working
		w=n/(ii+1);
			
			// prime number
			if (w-(int)w==0 && w==1.0){
			fprintf(fid,"%i       %.0lf   \n",c, n);
			c=c+1;
			n=n+1;
			ii=1;
			}
			
			// not a prime number
			else if (w-(int)w==0 && w!=1.0){
			//printf("%i       %lf               No            %lf \n",ii, n, w);
			n=n+1;
			ii=1;
			}
			
			else if (w-(int)w!=0){
			ii=ii+1;
			}	
	}
	
	
	// close file
	fclose(fid);
	
return(0);	
} 