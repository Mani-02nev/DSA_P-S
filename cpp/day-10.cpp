// Container With Most Water
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
     cout << "Heights: ";
     for (int h : height)
          cout << h << " ";
     cout << endl;
     int left = 0, right = height.size() - 1;
     int maxArea = 0;
     while (left < right)
     {
          int width = right - left;
          int area = min(height[left], height[right]) * width;
          maxArea = max(maxArea, area);
          if (height[left] < height[right])
               left++;
          else
               right--;
     }
     cout << "Maximum area of water that can be contained: " << maxArea << endl;
}