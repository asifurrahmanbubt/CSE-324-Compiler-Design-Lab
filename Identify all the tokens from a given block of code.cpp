#include <iostream>
#include <vector>
#include <cctype>
#include <sstream>

using namespace std;

vector<string> tokenize(const string &code) {
    vector<string> tokens;
    stringstream ss(code);
    string token;

    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    string code = "int main() { float x = 10.0; if (x > 5) x = x * 2; }";
    vector<string> tokens = tokenize(code);

    cout << "Tokens: ";
    for (const string &token : tokens) {
        cout << token << " ";
    }
    cout << endl;

    return 0;
}
