#include <iostream>
#include <unordered_set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::unordered_set<int> num;
    int user_input;

    while(std::cin >> user_input)
    {
        if (auto i = num.find(user_input); i != num.end())
            std::cout << "YES\n";
        else
        {
            std::cout << "NO\n";
            num.insert(user_input);
        }
    }

    return 0;
}