#include <stdio.h>

int main() {
    int arr[] = {1, 3, 90, 49, 25, 78, 22, 21, 22, 21};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    // 1. Find min and max values
    int valmin = arr[0];
    int valmax = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < valmin) valmin = arr[i];
        if (arr[i] > valmax) valmax = arr[i];
    }

    // 2. Create count array (using stack allocation)
    int count_size = valmax - valmin + 1;
    int TabCount[count_size]; // C99+ supports variable-length arrays
    
    // Initialize counts to 0
    for (int i = 0; i < count_size; i++) {
        TabCount[i] = 0;
    }

    // 3. Count occurrences
    for (int i = 0; i < N; i++) {
        TabCount[arr[i] - valmin]++;
    }

    // 4. Reconstruct sorted array
    int K = 0; // Position in original array
    for (int i = 0; i < count_size; i++) {
        while (TabCount[i] > 0) {
            arr[K] = i + valmin;
            K++;
            TabCount[i]--;
        }
    }

    // Print results
    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nMin: %d, Max: %d\n", valmin, valmax);

    return 0;
}