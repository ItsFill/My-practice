#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<char> s;
    std::string str;

    std::cin >> str;

    for (auto c : str)
    {
        if (c == '}' || c == ')' || c == ']') {
            if (s.empty()) {
                std::cout << "NO\n";
                return 0;
            }
            else {
                if (s.top() == '{' && c == '}') { s.pop(); }
                else if (s.top() == '(' && c == ')') { s.pop(); }
                else if (s.top() == '[' && c == ']') { s.pop(); }
                else {
                    std::cout << "NO\n";
                    return 0;
                }
            }
        } else if (c == '{' || c == '[' || c == '(') {
            s.push(c);
        }
    }
    if (s.empty()) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }


    return 0;
}
