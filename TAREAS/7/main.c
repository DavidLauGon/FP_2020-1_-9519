#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = pow(x, y);
	printf("%i", z);
	
	return 0;
}
