#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;


void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = INT_MAX;
    maxVal = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
}

int main() {

    const int SIZE = 10;
    int arr[SIZE];

    
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }

    
    int minVal, maxVal;
    findMinMax(arr, SIZE, minVal, maxVal);

    
    cout << "Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}