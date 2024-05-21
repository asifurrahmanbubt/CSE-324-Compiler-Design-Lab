#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool matchesPattern(const string &str, const string &pattern) {
    regex re(pattern);
    return regex_match(str, re);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (matchesPattern(str, "abb")) {
        cout << str << " matches pattern abb." << endl;
    } else if (matchesPattern(str, "a*b+")) {
        cout << str << " matches pattern a*b+." << endl;
    } else if (matchesPattern(str, "a.")) {
        cout << str << " matches pattern a." << endl;
    } else {
        cout << str << " does not match any pattern." << endl;
    }

    return 0;
}
