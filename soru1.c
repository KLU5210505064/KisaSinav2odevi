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
    printf("Dizinin elemanlarını giriniz: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    printf("Aranacak elemanı giriniz: ");
    scanf("%d", &target);
    
    if (linear_search(arr, size, target)) {
        printf("Aranılan eleman dizide bulunuyor.\n");
    } else {
        printf("Aranılan eleman dizide bulunmuyor.\n");
    }
    
    return 0;
}

