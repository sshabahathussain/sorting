#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
             ans = mid;
            // Search in left part
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
      mid = start + (end - start) / 2;  
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 8};
    int size = sizeof(arr) / sizeof(int);
    int target = 4;
    int foundIndex = binarySearch(arr, size, target);
    if(foundIndex == -1) {
       cout<<"Target element is not found"<<endl;
    }
    else {
        cout<<"Target element is found at index " << foundIndex;
    }

    return 0;
}