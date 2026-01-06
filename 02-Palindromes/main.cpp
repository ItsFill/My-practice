#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::string line;

    if (!std::getline(std::cin, line)) return 0;

    std::string temp = "";
    for (char s : line)
    {
        if (!isspace(s))
            temp += tolower(s);
    }
    line = temp;


    std::string reversed;
    reversed.append(line);
    std::reverse(reversed.begin(), reversed.end());

    if (line == reversed)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}