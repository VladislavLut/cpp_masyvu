#include <iostream>

using namespace std;


void findMaxAndMinProfitMonth(int profits[], int start, int end, int& maxMonth, int& minMonth) {
    
    int maxProfit = profits[start];
    int minProfit = profits[start];
    maxMonth = start;
    minMonth = start;

    
    for (int i = start + 1; i <= end; i++) {
        
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i;
        }

        
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i;
        }
    }
}

int main() {
    const int NUM_MONTHS = 12;
    int profits[NUM_MONTHS];

    
    cout << "Enter the profits for each month:\n";
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> profits[i];
    }

    int start, end;
    cout << "Enter the range (start and end month): ";
    cin >> start >> end;

    
    if (start < 1 || start > NUM_MONTHS || end < 1 || end > NUM_MONTHS || start > end) {
        cout << "Invalid range. Please enter a valid range between 1 and " << NUM_MONTHS << ".\n";
        return 0;
    }

    int maxMonth, minMonth;
    findMaxAndMinProfitMonth(profits, start - 1, end - 1, maxMonth, minMonth);

    cout << "Month with maximum profit: " << maxMonth + 1 << endl;
    cout << "Month with minimum profit: " << minMonth + 1 << endl;

    return 0;
}