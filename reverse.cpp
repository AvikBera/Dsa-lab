#include <iostream>
#include <vector>
using namespace std;

vector<char> reverse_string(vector<char>& s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    return s;
}

int main() {
    vector<char> s = {'A', 'V', 'I', 'K'};

    reverse_string(s);

    for (char c : s) {
        cout << c;
    }

    return 0;
}