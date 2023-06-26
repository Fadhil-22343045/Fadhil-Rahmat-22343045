#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime(int n, int *arr, int *m)
{
    int count = 0, is_prime;
    for (int i = 2; count < n; i++) {
        is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            if (count == *m) {
                *m *= 2;
                arr = (int *)realloc(arr, (*m) * sizeof(int));
                if (arr == NULL) {
                    printf("Gagal mengalokasikan memori\n");
                    exit(1);
                }
            }
            arr[count++] = i;
        }
    }
}

int main()
{
	printf(" Nama\t: Fadhil Rahmat\n");
	printf(" Nim\t: 22343045\n");
	printf(" Makul\t: Pratikum Struktur Data\n\n");
	
    int n, m = 10;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    int *primes = (int *)malloc(m * sizeof(int));
    if (primes == NULL) {
        printf("Gagal mengalokasikan memori\n");
        exit(1);
    }

    prime(n, primes, &m);

    printf("Bilangan prima: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    free(primes);
    return 0;
}
