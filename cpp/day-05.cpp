#include <iostream>
using namespace std;
int main()
{
     int arr[] = {7, 4, 6, 2, 3, 35, 5, 8, 9, 1};
     int big = arr[0];
     int big_2 = 0;
     for (int x : arr)
     {
          if (x > big)
          {
               big_2 = big;
               big = x;
          }
     }
     cout << "=========================Find Biggest and Second Biggest Element==========================\n==========================================================================================\n";
     cout << "Given Array: " << endl;
     for (int x : arr)
     {
          cout << x << "\t";
     }
     cout << endl;
     cout << "The biggest element is: " << big << endl;
     cout << "The second biggest element is: " << big_2 << endl;
}