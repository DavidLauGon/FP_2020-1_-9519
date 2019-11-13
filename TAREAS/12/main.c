#include <stdio.h>
#include <stdlib.h>
int saludos(int x)
{
	int a, b;
	b = x-1;
	if(b==0)
	{
		return b;
	}
	a = b+saludos(x-1);
	return a;
}
int main(int argc, char *argv[])
{
	int x, y;
	x = atoi(argv[1]);
	y = saludos(x);
	printf("%i\n", y);
	return 0;
}
