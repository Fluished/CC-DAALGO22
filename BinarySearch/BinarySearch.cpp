#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> sortedArray = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int targetElement;

    cout << "Array: ";
    for (int i = 0; i < sortedArray.size(); i++)
    {
        cout << sortedArray[i] << " ";
    }
    cout << "\nEnter the number you want to search for: ";
    cin >> targetElement;

    int result = binarySearch(sortedArray, targetElement);
    if (result != -1)
    {
        std::cout << "Number found at index: " << result << std::endl;
    }
    else
    {
        std::cout << "Number not found in the array." << std::endl;
    }

    return 0;
}