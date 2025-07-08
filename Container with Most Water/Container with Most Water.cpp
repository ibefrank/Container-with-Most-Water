// Container with Most Water.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max
using namespace std;


// Function to compute the maximum area of water a container can store
int maxArea(vector<int>& height) {
    int left = 0;                          // Start pointer
    int right = height.size() - 1;         // End pointer
    int maxWater = 0;

    // Use two-pointer technique to calculate maximum area
    while (left < right) {
        int h = min(height[left], height[right]);  // Height is limited by the shorter line
        int w = right - left;                      // Width is the distance between lines
        int area = h * w;
        maxWater = max(maxWater, area);            // Update max area

        // Move the pointer at the shorter height
        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    int n;

    // Ask user for number of heights
    cout << "Enter number of heights: ";
    cin >> n;

    // Input validation
    if (n < 2) {
        cout << "You need at least 2 heights to form a container." << endl;
        return 0;
    }

    vector<int> height(n);

    // Ask user to input each height value
    cout << "Enter " << n << " height values (space-separated or one per line):\n";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    // Calculate and display the result
    int result = maxArea(height);
    cout << "Maximum water that can be contained: " << result << endl;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
