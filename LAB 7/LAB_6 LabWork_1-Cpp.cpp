// Name: Abdul Ghaffar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0711
// Section: A
// Assignment NO# 02 
// TASK: 01 
// Find Maximum,Minimum, and Average.

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max, min;
    float sum = 0;

    cout << "Enter 10 integers:\n";
    for(int i=0;i<10;i++) {
        cin >> arr[i];
    }

    max = min = arr[0];

    for(int i=0;i<10;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    cout << "Average = " << sum/10 << endl;

    return 0;
}