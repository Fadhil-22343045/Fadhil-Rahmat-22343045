#include <stdio.h>

struct complex{
	int imag;
	float real;
};

struct number{
	struct complex comp;
	int integers;
}num1, num2;

struct details{
	struct number num1;
	struct number num2;
};

struct information{
	struct details det1;
	struct details det2;
};

struct personal_info{
	struct information info1;
	struct information info2;
};

int main(){
	struct personal_info me;
	
	
  	
	printf("Masukkan data real pertama: ");
	scanf("%f", &me.info1.det1.num1.comp.real);
	
	printf("Masukkan data imag pertama: ");
	scanf("%d", &me.info1.det1.num1.comp.imag);
	
	printf("Masukkan data integer pertama: ");
	scanf("%d", &me.info1.det1.num1.integers);
	
	printf("\nInformasi complex pertama: %.2f + %di\n", me.info1.det1.num1.comp.real, me.info1.det1.num1.comp.imag);
	printf("Informasi integer pertama: %d\n", me.info1.det1.num1.integers);
	
	return 0;
}
