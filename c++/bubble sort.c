#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int temp;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
