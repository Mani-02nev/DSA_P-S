#include <iostream>
using namespace std;

int main() {

    // Mixed type → stored as string (C++ arrays must be same type)
    string my_Array[] = {"1","Mani","18","20","K","444"};

    // Homogeneous numeric array
    double my_Array2[] = {2,5,6,1,6,20,7,9,10,13,0,0.5,0.1,-1,-20};
    int len = 0;
    for(string element : my_Array) {
        cout << "Processing the element : " << element << endl;
        len++;
    }
    cout << "Length of the Array is : " << len << endl;
// Max of the Array
    double maxVal = my_Array2[0];   // initialize with first element

    for(double item : my_Array2) {
        if(maxVal < item) {
            maxVal = item;
        }
    }
    cout << "Max of Array is : " << maxVal << endl;
// Min of the Array
    double minVal = my_Array2[0];   // initialize with first element
    for(double item : my_Array2) {
        if(minVal > item) {
            minVal = item;
        }
    }
    cout << "Min of Array is : " << minVal << endl;
    return 0;
}
