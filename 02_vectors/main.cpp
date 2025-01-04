#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks = {43, 23, 54, 23, 76};
    cout << marks[0] <<endl;

    vector <int> vec (5, 10);
    cout << vec[0] <<endl;
    cout << vec[2]<<endl;
    cout << vec[4]<<endl;

    cout << endl;

    for (int mark: marks){
        cout << mark << endl;
    }

    cout << "Original size of teh vector marks: " << marks.size() << endl;
    marks.push_back(69);
    cout << "New size of the vector marks: " << marks.size() << endl;
    marks.pop_back();
    cout << "Size of the vector marks after pop_back: " << marks.size() << endl;
    cout << "The first element of the vector marks: " << marks.front() << endl;
    cout << "The last element of the vector marks: " << marks.back() << endl;
    cout << "The element at the index 3 of the vector marks: " << marks.at(3) << endl;
    cout << "The capacity of the vector marks: " << marks.capacity() << endl; // The capacity is always double the size of the vector
    return 0;
}