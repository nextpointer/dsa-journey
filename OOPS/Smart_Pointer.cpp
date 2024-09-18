#include <iostream>
using namespace std;

// Smart pointer: a C++ wrapper class over a pointer with the extra functionality of automatic object destruction.
// It overloads the operators like * and ->. The intuition of using a destructor is that it is automatically called when the object goes out of scope.

class SmartPtr {
    // Initialize the actual pointer
    int *ptr;

public:
    // Initialize the constructor
    explicit SmartPtr(int *p = NULL) {
        ptr = p;
    }

    // Create a destructor that automatically deletes the object
    ~SmartPtr() {
        cout << "The pointer deleted automatically" << endl;
        delete ptr; // Delete the allocated memory
    }


    // Overloading the dereference operator to use it like a pointer
    int &operator *() {
        return *ptr; // Return a reference to the integer pointed to by ptr
    }
};

int main() {
    SmartPtr ptr(new int()); // Create a SmartPtr that points to a new integer
    *ptr = 69;               // Assign the value 69 to the integer
    cout << *ptr << endl;    // Output the value pointed to by ptr
    return 0;                // ptr goes out of scope here, and the destructor is called
}
