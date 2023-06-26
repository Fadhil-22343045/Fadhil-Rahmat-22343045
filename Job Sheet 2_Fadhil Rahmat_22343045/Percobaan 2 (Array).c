#include <stdio.h>

int main () {


	int n [10];
	int i,j ;
	for (i=1; i<10; i++ )  {
		n[i]= i +100;
	}
	for (j=1; j<i; j++) {
		printf ("Element[%d]=%d\n",j,n[j]);
		
	}
	return 0;
}
