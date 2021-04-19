#include <stdio.h>
#include <math.h>

void StandardDeviasi (float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i)sum += data[i];
    mean = sum / 10;
    for (i = 0; i < 10; ++i) SD += pow(data[i] - mean, 2);
    printf("output : %f",  sqrt(SD / 10));
}

void main() {
    int length;
    printf("input : ");
    scanf("%i", &length);
    float data[length];
    for (int i = 0; i < length; i++)scanf("%f", &data[i]);
    StandardDeviasi(data);
}
