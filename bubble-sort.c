#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

void bubble_sort(int numbers[], size_t length) {
    for (size_t i = length; i > 1; i--) {
        bool swapped = false;

        for(size_t j = 0; j < i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main(void) {
    int numbers[] = {32, 21, 45, 18, 29, 79, -5, 11, -9, 28};

    const size_t length = sizeof(numbers) / sizeof(numbers[0]);

    bubble_sort(numbers, length);

    printf("=== Sorted Numbers ===\n");

    for (size_t i = 0; i < length; i++) {
        printf("%2zu. %4d\n", i + 1, numbers[i]);
    }

    return 0;
}
