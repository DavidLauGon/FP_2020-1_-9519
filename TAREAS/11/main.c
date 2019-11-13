#include <stdio.h>
#include <stdlib.h>
double raiz(double a, double b, double c)
{
	double x, y;
	x = a/c;
	y = c-x;
	y = y>0? y:-y;
	if(y<=b)
	{
		return c;
	}
	else
	{
		c = (c+x)/2;
		return raiz(a, b, c);
	}
}
int main(int argc, char *argv[])
{
	double a, b, c;
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);
	c = raiz(a,b,c);
	printf("%lf\n", c);
}
