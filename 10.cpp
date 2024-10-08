#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    
    int* arr = new int[size]; // Dynamically allocate array
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr; // Deallocate memory
    return 0;
}
