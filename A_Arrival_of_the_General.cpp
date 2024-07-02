#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int leftmost_max_index = 0, rightmost_min_index = n - 1;

    for (int i = 1; i < n; ++i) {
        if (heights[i] > heights[leftmost_max_index]) {
            leftmost_max_index = i;
        }
    }


    for (int i = n - 2; i >= 0; --i) {
        if (heights[i] < heights[rightmost_min_index]) {
            rightmost_min_index = i;
        }
    }
    int swaps = leftmost_max_index - 1 + n - rightmost_min_index;
    if (leftmost_max_index > rightmost_min_index) {
        swaps--;
    }
    cout << swaps << endl;

    return 0;
}
