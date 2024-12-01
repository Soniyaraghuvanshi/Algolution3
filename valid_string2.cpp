#include <iostream>
#include <string>
using namespace std;

bool isValidBruteForce(string s) {
    int n = s.length();

    while (true) {
        bool replaced = false;
    
        for (int i = 0; i < n - 1; ++i) {
            if ((s[i] == '(' && s[i + 1] == ')') || 
                (s[i] == '{' && s[i + 1] == '}') || 
                (s[i] == '[' && s[i + 1] == ']')) {
               
                s.erase(i, 2);
                replaced = true;
                break;
            }
        }

        if (!replaced) {
            break;
        }
    }

    return s.empty();
}

int main() {
    string s;
    cout << "Enter the string of brackets: ";
    cin >> s;

    if (isValidBruteForce(s)) {
        cout << "The string is valid!" << endl;
    } else {
        cout << "The string is not valid!" << endl;
    }

    return 0;
}
