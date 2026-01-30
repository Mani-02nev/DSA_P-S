#include <iostream>
using namespace std;
class MyClass
{
public:
     int re(int a[], int n)
     {
          int j = 0;
          for (int i = 1; i < n; i++)
          {
               if (a[i] != a[j])
               {
                    j++;
                    a[j] = a[i];
               }
          }
          return j + 1;
     }
};
int main()
{
     MyClass obj; // obj is name of the object
     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
     int n = sizeof(arr) / sizeof(arr[0]);
     cout << "===========================Remove Duplicates from Sorted Array=========================\n=====================================================================================\n";
     cout << "Given Array: " << endl;
     for (int x : arr)
     {
          cout << x << "\t";
     }
     cout << endl;
     n = obj.re(arr, n);
     cout << "Array after removing duplicates: " << endl;
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << "\t";
     }
     cout << "\n";
}