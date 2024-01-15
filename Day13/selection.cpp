#include <bits/stdc++.h>
using namespace std;

// Class definition for Sorting algorithms
class Sorting
{
public:
    // Function to perform Selection Sort on a vector of integers
    void selectionSort(vector<int>& arr){
        // Loop through each element in the array
        for (int i = 0; i < arr.size(); i++)
        {
            // Assume the current index is the minimum
            int min = i;

            // Iterate through the unsorted part of the array to find the minimum element
            for (int j = i + 1; j < arr.size(); j++)
            {
                // If an element is smaller than the current minimum, update the minimum
                if(arr[min] > arr[j])
                    min = j;
            }

            // Swap the current element with the minimum element found
            swap(arr[i], arr[min]);
        }
    }
};

// Main function where the sorting algorithm is demonstrated
int main(int argc, char const *argv[])
{
    // Sample vector of integers
    vector<int> arr = {5, 4, 9, 2, 1};

    // Create an object of the Sorting class
    Sorting obj;

    // Call the selectionSort method to sort the vector
    obj.selectionSort(arr);

    // Display the sorted vector
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
