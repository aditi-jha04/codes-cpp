#include <stdio.h>

int main(void) {
	int *p1, x= 3;
	double *p2, y = 2.64; 
	char *p3, str[] = "CAS";
	p1 = &x;
	p2 = &y;
	p3 = &str[0];
	
	printf("The variables and their addresses are \n %d, %u \n %lf, %u \n %s, %u", x, p1, y, p2, str, p3);
	
	return 0;
}
