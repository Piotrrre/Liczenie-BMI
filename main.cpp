#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Podaj wage w kilogramach: ");
    scanf("%f", &weight);

    printf("Podaj wzrost w metrach (np. 1.75): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Twoje BMI wynosi: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Niedowaga\n");
    } else if (bmi < 24.9) {
        printf("Waga prawidlowa\n");
    } else if (bmi < 29.9) {
        printf("Nadwaga\n");
    } else {
        printf("Otylosc\n");
    }

    return 0;
}
