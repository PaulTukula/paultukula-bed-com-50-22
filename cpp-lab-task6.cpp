#include <iostream>
#include <string>
using namespace std; 

int main() {
    
    int* dynamic_int = new int;
    cout << "Enter an integer value: ";
    cin >> *dynamic_int;

    string* dynamic_string = new string;
    cout << "Enter a string value: ";
    cin.ignore(); 
    getline(cin, *dynamic_string);

    cout << "Dynamically allocated integer value: " << *dynamic_int << endl;
    cout << "Dynamically allocated string value: " << *dynamic_string << endl;

    delete dynamic_int;
    delete dynamic_string;

    return 0;
}