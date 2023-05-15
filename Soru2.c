#include <stdio.h>

int binary_search(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int size = sizeof(dizi) / sizeof(dizi[0]);
    
    int target;
    
	printf("Aranacak elemani giriniz: ");
    scanf("%d", &target);
    
    int result = binary_search(dizi, 0, size - 1, target);
    if (result == -1) {
        printf("Aranilan eleman dizide bulunmuyor.\n");
    } else {
        printf("Aranilan eleman %d. indiste bulunuyor.\n", result);
    }
    
    return 0;
}
