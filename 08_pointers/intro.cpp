#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // printing address of the variable.
    cout << "The address of a: " << &a << endl;

    // storing the address of a variable into another variable;
    int *ptr = &a;
    cout << "The address of variable stored in pointer 'ptr'." << endl;

    // if we want to store the address of the pointer.
    int **ptrtptr = &ptr;

    return 0;
}