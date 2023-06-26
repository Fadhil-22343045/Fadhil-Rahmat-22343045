#include <stdio.h>
#include <stdlib.h>

void fib(int n, int *arr)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main()
{
	printf(" Nama\t: Fadhil Rahmat\n");
	printf(" Nim\t: 22343045\n");
	printf(" Makul\t: Pratikum Struktur Data\n\n");
	
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    int *fibonacci = (int *)malloc(n * sizeof(int));
    if (fibonacci == NULL) {
        printf("Gagal mengalokasikan memori\n");
        exit(1);
    }

    fib(n, fibonacci);

    printf("Deret Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    free(fibonacci);
    return 0;
}


