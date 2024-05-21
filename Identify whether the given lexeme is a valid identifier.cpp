#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isValidIdentifier(const string &lexeme) {
    if (lexeme.empty() || !(isalpha(lexeme[0]) || lexeme[0] == '_')) {
        return false;
    }
    for (char ch : lexeme) {
        if (!(isalnum(ch) || ch == '_')) {
            return false;
        }
    }
    return true;
}

int main() {
    string lexeme;
    cout << "Enter a lexeme: ";
    cin >> lexeme;
    if (isValidIdentifier(lexeme)) {
        cout << lexeme << " is a valid identifier." << endl;
    } else {
        cout << lexeme << " is not a valid identifier." << endl;
    }
    return 0;
}
