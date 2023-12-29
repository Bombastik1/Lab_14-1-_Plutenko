#include <stdio.h>
#include <limits.h>
#include <locale> 
int main() {
    setlocale(LC_ALL, "");
    int n;
    int i;
    int x;
    printf("Введiть кiлькiсть елементiв масиву: ");
    scanf_s("%d", &n);
    int* array = (int*)malloc(n * sizeof(int));
    printf("Введiть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }
    int* max = array;
    int* min = array;

    for (i = 1; i < n; i++) {
        if (array[i] > *max) {
            max = &array[i];
        }
        if (array[i] < *min) {
            min = &array[i];
        }
    }
    x = max - min - 1;
    printf("Максимальне значення: %d \n", *max);
    printf("Мiнiмальне значення: %d \n", *min);
    if (x != -1) {
        printf("Вiдстань мiж їх позицiями в масивi: %ld \n", abs(max - min));
        printf("(мiж значеннями %ld елементiв)\n", abs(max - min) - 1);
    }
    else {
        printf("Вiдстань мiж їх позицiями в масивi: %ld \n", abs(max - min));
        printf("(мiж значеннями 0 елементiв)\n");
    }

    return 0;
}