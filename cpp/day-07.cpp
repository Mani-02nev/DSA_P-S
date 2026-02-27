// rotate the array to the right by k positions
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
     cout << "Original array: ";
     for (int i : arr)
          cout << i << " ";
     cout << endl;
     int k;
     cout << "Enter the number of positions to rotate: ";
     cin >> k;
     k = k % arr.size();
     vector<int> rotated(arr.size());
     for (size_t i = 0; i < arr.size(); ++i)
          rotated[(i + k) % arr.size()] = arr[i];
     cout << "Array after rotating to the right by " << k << " positions: ";
     for (int i : rotated)
          cout << i << " ";
     cout << endl;
}
