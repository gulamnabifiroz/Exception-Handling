//Gulamnabi Khan
//24070123503
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    try {
        if (age < 18) {
            throw age;
        }
        else {
            cout << "Age: " << age << "\nAPPROVED!" << endl;
        }
    }
    catch (int underage) {
        cout << "\nError: Underage! (" << underage << ")" << endl;
    }

    return 0;
}

/* Example Output:
Enter age: 13

Error: Underage! (13)
*/

