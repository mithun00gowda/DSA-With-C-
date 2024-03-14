#include <iostream>
#include <vector>

using namespace std;

// Function to generate all subarrays of a given array
vector<vector<int>> generateSubarrays(const vector<int>& arr) {
    vector<vector<int>> subarrays;
    int n = arr.size();

    // Iterate over all possible start indices
    for (int start = 0; start < n; ++start) {
        // Iterate over all possible end indices
        for (int end = start; end < n; ++end) {
            // Create a new subarray from start to end index
            vector<int> subarray;
            for (int i = start; i <= end; ++i) {
                subarray.push_back(arr[i]);
            }
            // Add the subarray to the list of subarrays
            subarrays.push_back(subarray);
        }
    }
    return subarrays;
}

int main() {
    // Input array
    vector<int> arr = {1, 2, 3};

    // Generate all subarrays
    vector<vector<int>> subarrays = generateSubarrays(arr);

    // Print all subarrays
    for (const auto& subarray : subarrays) {
        for (int element : subarray) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
