#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int size;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Dizinin elemanlar�n� giriniz: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    printf("Aranacak eleman� giriniz: ");
    scanf("%d", &target);
    
    if (linear_search(arr, size, target)) {
        printf("Aran�lan eleman dizide bulunuyor.\n");
    } else {
        printf("Aran�lan eleman dizide bulunmuyor.\n");
    }
    
    return 0;
}

