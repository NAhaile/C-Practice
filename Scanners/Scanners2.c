// this program is to raise any inputted number to the power of 2
// also note, program will not compile if the -lm flag is not included
// because the pow function has to be linked with the math library

#include <stdio.h> 
#include <math.h>

int main() {
	double b;
	double var;
	char buff[20];

	printf("What is your Base Value? ") #<--- getting value from the user
	fgets(buff, 20, stdin);
	sscanf(buff, "%lf", &b);
  

	var = pow(b,2);

	printf("Here is your number to the power of two: %.0lf", var);
    return 0;
    
}
