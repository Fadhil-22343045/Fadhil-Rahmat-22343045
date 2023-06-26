#include <stdio.h>

int main () {
	int n ;
	int i ;
	int angka [n];
	

	printf("Masukkan banyaknya bilangan :");scanf ("%d", &n);
	
	for (i=1; i<n; i++){
		printf ("Masukkan angka ke %d\n",i+1);
		scanf ("%d",&angka[i]);
	}
	for (i=1; i<n;i++){

		printf ("Angka ke %d : %d\n",i+1,angka[i]);
	
	}
	getchar();
	return 0;
}
