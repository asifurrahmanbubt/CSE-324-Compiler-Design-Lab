#include <iostream>
#include <string>

using namespace std;

bool isValidFloatingPoint(const string &lexeme) {
    int pointCount = 0;
    int start = (lexeme[0] == '+' || lexeme[0] == '-') ? 1 : 0;
    
    if (lexeme.empty() || start == lexeme.size()) {
        return false;
    }

    for (int i = start; i < lexeme.size(); i++) {
        if (lexeme[i] == '.') {
            pointCount++;
        } else if (!isdigit(lexeme[i])) {
            return false;
        }
    }
    return (pointCount == 1);
}

int main() {
    string lexeme;
    cout << "Enter a lexeme: ";
    cin >> lexeme;
    if (isValidFloatingPoint(lexeme)) {
        cout << lexeme << " is a valid floating point number." << endl;
    } else {
        cout << lexeme << " is not a valid floating point number." << endl;
    }
    return 0;
}
