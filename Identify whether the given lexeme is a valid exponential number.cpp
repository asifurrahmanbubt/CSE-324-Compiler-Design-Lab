#include <iostream>
#include <string>

using namespace std;

bool isValidExponential(const string &lexeme) {
    size_t ePosition = lexeme.find('E');
    if (ePosition == string::npos) return false;

    string basePart = lexeme.substr(0, ePosition);
    string exponentPart = lexeme.substr(ePosition + 1);

    bool baseValid = !basePart.empty() && basePart.find_first_not_of("0123456789.-") == string::npos;
    bool exponentValid = !exponentPart.empty() && exponentPart.find_first_not_of("0123456789-") == string::npos;

    return baseValid && exponentValid;
}

int main() {
    string lexeme;
    cout << "Enter a lexeme: ";
    cin >> lexeme;
    if (isValidExponential(lexeme)) {
        cout << lexeme << " is a valid exponential number." << endl;
    } else {
        cout << lexeme << " is not a valid exponential number." << endl;
    }
    return 0;
}
