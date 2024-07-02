#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int present[26] = {0};

    for (char c : s) {
        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
            char lc = tolower(c);
            present[lc - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (present[i] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
