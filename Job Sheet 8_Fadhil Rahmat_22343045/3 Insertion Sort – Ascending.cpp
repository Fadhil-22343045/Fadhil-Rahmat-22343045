#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

void InsertionSort(int arr[])
{
    int i, j, key;
    for (i = 1; i < MAX; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int data_awal[MAX], data_urut[MAX];
    int i;
    clock_t k1, k2;

    printf("Sebelum pengurutan:\n");
    for (i = 0; i < MAX; i++)
    {
        srand(time(NULL) * (i + 1));
        data_awal[i] = rand() % 100 + 1;
        printf("%d ", data_awal[i]);
    }
    printf("\n");

    printf("Setelah pengurutan:\n");
    for (i = 0; i < MAX; i++)
        data_urut[i] = data_awal[i];

    k1 = clock();
    InsertionSort(data_urut);
    k2 = clock();

    for (i = 0; i < MAX; i++)
        printf("%d ", data_urut[i]);

    double waktu = ((double)(k2 - k1)) / CLOCKS_PER_SEC;
    printf("\nWaktu = %.6lf detik\n", waktu);

    return 0;
}

