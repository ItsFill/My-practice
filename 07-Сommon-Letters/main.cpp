#include <iostream>
#include <string>
#include <set>
#include <algorithm>

int main()
{
    std::string input;
    std::set<char> letters;
    short iter = 0;

    while (std::cin >> input)
    {
        if (iter > 0)
        {
            if (letters.empty()) break;
        }

        if (iter == 0)
        {
            for (auto letter : input)
            {
                letters.insert(letter);
            }
        }
        else
        {
            std::set<char> temp;
            for (auto letter : letters)
                if (input.find(letter) != std::string::npos)
                {
                    temp.insert(letter);
                }
            letters = temp;
        }
        ++iter;
    }
    for (auto letter : letters)
    {
        std::cout << letter;
    }

    return 0;
}