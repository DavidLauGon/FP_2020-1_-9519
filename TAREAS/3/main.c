#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
	float x;
	float y;
	x = atof(argv[1]);
	y = atof(argv[2]);
	printf("%.2f\n", x+y);
	printf("%.2f\n", x-y);
	printf("%.2f\n", x*y);
	printf("%.2f\n", x/y);
	
	return 0;
}

