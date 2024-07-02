#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the input
    vector<int> nums(4);
    for(int i = 0; i < 4; ++i)
        cin >> nums[i];
    
    // Sort the numbers
    sort(nums.begin(), nums.end());
    
    // Calculate a, b, and c
    int a = nums[3] - nums[0];
    int b = nums[3] - nums[1];
    int c = nums[3] - nums[2];
    
    // Output the result
    cout << a << " " << b << " " << c << endl;

    return 0;
}
