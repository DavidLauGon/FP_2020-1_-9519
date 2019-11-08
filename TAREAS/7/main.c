#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	long int x, y, a, b; 
	x = atoi(argv[1]); 
	y = atoi(argv[2]); 
	a = 1; 
	b = 1; 
	
	do{ 
		b=b*x; 
		a++; 
	}while(a<=y); 
	printf("%li\n", b);  
	
	return 0;
}
