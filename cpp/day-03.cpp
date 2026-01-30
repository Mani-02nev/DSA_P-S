#include <iostream>
using namespace std;
int main()
{
     int array[] = {5, 3, 8, 6, 2, 7, 4, 1, 0, 9};
     int n;
     cout << "enter the serching element: ";
     cin >> n;
     int i = 0;
     for (int x : array)
     {
          if (x == n)
          {
               cout << "Element found at index " << (i) << endl;
               break;
          }
          i++;
     }
     cout << "\n";
}