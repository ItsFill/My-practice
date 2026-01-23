#include <iostream>
#include <string>

template <typename T>
void Print(const T& container, const std::string& divider)
{
    bool isFirst = true;
    for (const auto& i : container)
    {
        if (!isFirst)
            std::cout << divider;
        std::cout << i;
        isFirst = false;
    }
    std::cout << "\n";
}
