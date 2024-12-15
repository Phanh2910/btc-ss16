#include <stdio.h>
void sort(int *arr, int size) {
    for (int i=0;i<size-1;i++) {
        for (int j=i+1;j<size;j++) {
            if (arr[i] > arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    int arr[size];
    printf("Nhap %d phan tu cho mang: \n", size);
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
