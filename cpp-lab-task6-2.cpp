#include <iostream>

int main() {
    using namespace std;

    int rows, column;

    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum rows exceeded. Setting rows to 3." << endl;
        rows = 3;
    }
    cout << "Enter the number of columns (maximum 3): ";
    cin >> column;
    if (column> 3) {
        cout << "Maximum columns exceeded. Setting columns to 3." << endl;
        column = 3;
    }
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[column];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}