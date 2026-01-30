#include <iostream>
using namespace std;
int main()
{
     int array[] = {5, 3, 8, 6, 2, 7, 4, 1, 0, 9};
     int n = sizeof(array) / sizeof(array[0]);
     cout << "===========================Array Reversal Program================================\n=================================================================================\n";
     cout << "size of array: " << n << "\n";
     int reverseArray[n];
     // int n2 = sizeof(reverseArray) / sizeof(reverseArray[0]);
     // cout << "size of reverseArray: " << n2 << "\n";
     int i = 0;
     cout << "Original Array: ";
     for (int x : array)
     {
          cout << x << "\t";
          reverseArray[i] = array[n - 1];
          i++;
          n--;
     }
     cout << "\nReversed Array: ";
     for (int x : reverseArray)
     {
          cout << x << "\t";
     }
     cout << "\n";
     return 0;
}
