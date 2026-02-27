// move all 0 to end of the array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> arr = {0, 1, 0, 3, 12};
     cout << "Original array: ";
     for (int i : arr)
          cout << i << " ";
     cout << endl;
     cout << "Enter the target value to move to the end: ";
     int target;
     cin >> target;
     int j = 0;
     for (size_t i = 0; i < arr.size(); ++i)
     {
          if (arr[i] != target)
          {
               swap(arr[j], arr[i]);
               j++;
          }
     }
     cout << "Array after moving all " << target << " to the end: ";
     for (int i : arr)
          cout << i << " ";
     cout << endl;
}