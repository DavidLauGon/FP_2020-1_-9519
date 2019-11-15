#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void raices1(double a, double b, double c, double det)
{
	double x, y;
	double p;
	p = sqrt(det);
	x = (-b/2*a)+(p/2*a);
	y = (-b/2*a)-(p/2*a);
	printf(".2lf\n", x);
	printf(".2lf\n", y);
}
void raices2(double a, double b, double c, double det)
{
	double p;
	p = sqrt(-det);
	double x, y, m, n;
	x = b/(2*a); y = p/(2*a);
	m = -b/(2*a); n = p/(2*a);
	if (b==0)
	{
		x = 0; m = x;
	}
	printf("%.2lf+%.2lfi\n", x, y);
	printf("%.2lf%.2lfi\n", m, n);
}
void raiz(double a, double b)
{
	double x;
	x = -b/(2*a);
	printf("%.2lf\n", x);
}
int main(int argc,char *argv[])
{
	double a, b, c;
	a = atof(argv[1]); 
	b = atof(argv[2]);
	c = atof(argv[3]);
	double det;
	det = pow(b, 2);
	det = det-(4*a*c);
	if(det==0)
	{
		raiz(a, b);
	}
	else
	{
		if(det>0)
		{
			raices1(a, b, c, det);
		}
		else 
		{
			raices2(a, b, c, det);
		}
	}
	return 0;
}
