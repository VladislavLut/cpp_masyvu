#include <iostream>


double calculateSumOfNegatives(double arr[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }

    return sum;
}


double calculateProductBetweenMinMax(double arr[], int size) {
    double min = arr[0];
    double max = arr[0];
    double product = 1.0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    bool foundMin = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) {
            foundMin = true;
        }
        if (foundMin) {
            product *= arr[i];
        }
        if (arr[i] == max) {
            break;
        }
    }

    return product;
}


double calculateProductOfEvenIndices(double arr[], int size) {
    double product = 1.0;

    for (int i = 0; i < size; i += 2) {
        product *= arr[i];
    }

    return product;
}


double calculateSumBetweenFirstAndLastNegative(double arr[], int size) {
    double sum = 0.0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex != lastNegativeIndex) {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    const int N = 10;
    double arr[N] = { 1.5, -2.0, 3.7, -4.2, 5.9, -6.4, 7.1, -8.6, 9.3, -10.8 };

    double sumOfNegatives = calculateSumOfNegatives(arr, N);
    cout << "Sum of negative elements: " << sumOfNegatives << endl;

    double productBetweenMinMax = calculateProductBetweenMinMax(arr, N);
    cout << "Product of elements between min and max: " << productBetweenMinMax << endl;

    double productOfEvenIndices = calculateProductOfEvenIndices(arr, N);
    cout << "Product of elements with even indices: " << productOfEvenIndices << endl;

    double sumBetweenFirstAndLastNegative = calculateSumBetweenFirstAndLastNegative(arr, N);
    cout << "Sum of elements between first and last negative: " << sumBetweenFirstAndLastNegative << endl;

    return 0;
}