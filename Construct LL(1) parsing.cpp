#include <iostream>
#include <stack>
#include <map>
#include <vector>

using namespace std;

map<pair<char, char>, string> parsingTable;
stack<char> parseStack;
string input;
int inputIndex = 0;

void initializeParsingTable() {
    parsingTable[{'E', 'i'}] = "TX";
    parsingTable[{'X', '+'}] = "+TX";
    parsingTable[{'X', '$'}] = "";
    parsingTable[{'T', 'i'}] = "i";
}

bool parse() {
    parseStack.push('$');
    parseStack.push('E');

    while (!parseStack.empty() && inputIndex < input.size()) {
        char top = parseStack.top();
        char currentInput = input[inputIndex];

        if (top == currentInput) {
            parseStack.pop();
            inputIndex++;
        } else if (parsingTable.find({top, currentInput}) != parsingTable.end()) {
            parseStack.pop();
            string production = parsingTable[{top, currentInput}];
            for (int i = production.size() - 1; i >= 0; i--) {
                if (production[i] != ' ') {
                    parseStack.push(production[i]);
                }
            }
        } else {
            return false;
        }
    }

    return parseStack.empty() && inputIndex == input.size();
}

int main() {
    initializeParsingTable();
    cout << "Enter a string to parse: ";
    cin >> input;
    input += '$';

    if (parse()) {
        cout << "String is successfully parsed." << endl;
    } else {
        cout << "String parsing failed." << endl;
    }

    return 0;
}
