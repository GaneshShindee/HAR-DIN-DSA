#include <iostream>
// #include <limits.h> // For INT_MAX and INT_MIN

using namespace std;

int getMin(int num[], int size) {
    int min = INT8_MAX; // Use INT_MAX for initialization
    for (int i = 0; i < size; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min; // Return the min value
}

int getMax(int num[], int size) {
    int max = INT8_MIN; // Use INT_MIN for initialization
    for (int i = 0; i < size; i++) {

        
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max; // Return the max value
}

int main() {
    int size;
    cin >> size;
    
    // Ensure size does not exceed the array limit
    if (size > 100) {
        cout << "Size exceeds the maximum allowed size of 100." << endl;
        return 1;
    }

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Max: " << getMax(num, size) << endl;
    cout << "Min: " << getMin(num, size) << endl;

    return 0;
}
