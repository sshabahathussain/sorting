// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n)
// {
//     int start = 0, end = n - 1;
//     int mid = start + (end - start) / 2;
    
//     while (start <= end)
//     {
//         if (arr[mid] == (arr[mid] + 2))
//         {
             
//             // Search in Right part
//             start = mid + 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//       mid = start + (end - start) / 2;  
//     }
//     return ans;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 6, 7, 8};
//     int size = sizeof(arr) / sizeof(int);
    
//     int foundIndex = binarySearch(arr, size);
//     cout<<"Missing element is found at index " << foundIndex;
    

//     return 0;
// }