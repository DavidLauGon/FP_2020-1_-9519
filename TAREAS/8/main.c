#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int x; 
	float y, m, n; 
	x = atoi(argv[1]); 
	y = atof(argv[2]);
	if(x==0)
	{ 
		m= (y*(1.8))+32; 
		printf("%.2f\n", m); 
	}
	else
	{
		n=(y-32)*(0.55555555555555555555555555555556); 
		printf("%.2f\n", n); 
	}
	
	return 0;
}
