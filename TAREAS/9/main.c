#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int x;
	x = strlen(argv[1]);
	char argu[x];
	int y;
	y = 0;
	int dig[x];
	for(int i=0; i<x; i++)
	{
		argu[i] = argv[1][i];
		dig[i] = atoi(&argu[i]);
		y = y+dig[i];
	}
	printf("%i\n", y);
	return 0;
} 
