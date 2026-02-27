#include <iostream>
#include <vector>

int main()
{
     std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     std::cout << "Original array: ";
     for (int num : arr)
     {
          std::cout << num << " ";
     }
     std::cout << std::endl;

     int target;
     std::cout << "Enter the target value: ";
     std::cin >> target;

     bool found = false;
     std::cout << "Pairs with sum " << target << ":" << std::endl;
     for (size_t i = 0; i < arr.size(); i++)
     {
          for (size_t j = i + 1; j < arr.size(); j++)
          {
               if (arr[i] + arr[j] == target)
               {
                    std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl;
                    found = true;
               }
          }
     }

     if (!found)
     {
          std::cout << "No pairs found with sum " << target << std::endl;
     }

     return 0;
}