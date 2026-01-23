#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;
    std::vector<int> v1(n);
    std::vector<int> v2(k);
    for (int i = 0; i < n; i++)
    {
        std::cin >> v1[i];
    }
    for (int i = 0; i < k; i++)
    {
        std::cin >> v2[i];
    }
    for (int i : v2)
    {
        auto it = std::lower_bound(v1.begin(), v1.end(), i);
        auto lastIt = it - 1;
        if (it == v1.begin())
        {
            std::cout << *it << "\n";
        }
        else if (it == v1.end())
        {
            std::cout << *lastIt << "\n";
        }
        else
        {
            if ((i - *lastIt) > (*it - i))
            {
                std::cout << *it << "\n";
            }
            else if ((i - *lastIt) < (*it - i))
            {
                std::cout << *lastIt << "\n";
            }
            else if (*it == i)
            {
                std::cout << *it << "\n";
            }
            else
            {
                std::cout << *lastIt << "\n";
            }
        }
    }
    return 0;
}
