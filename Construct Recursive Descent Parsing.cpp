#include <iostream>
#include <string>

using namespace std;

string input;
int index = 0;

bool E();
bool T();

bool match(char expected) {
    if (index < input.size() && input[index] == expected) {
        index++;
        return true;
    }
    return false;
}

bool E() {
    if (T()) {
        if (match('+')) {
            return E();
        }
        return true;
    }
    return false;
}

bool T() {
    if (match('i')) {
        return true;
    }
    return false;
}

int main() {
    cout << "Enter a string: ";
    cin >> input;
    if (E() && index == input.size()) {
        cout << "String is successfully parsed." << endl;
    } else {
        cout << "String parsing failed." << endl;
    }
    return 0;
}
