#include <iostream>
#include <string>
#include <cctype>
#include <deque>

int main()
{
    int n;
    std::string surname;
    std::string where;
    std::string temp;

    std::cin >> n;
    std::deque<std::string> student;

    for (int i = 0; i < n; i++)
    {
        std::cin >> surname >> where;
        for (auto c : where)
            temp += std::tolower(c);
        if (temp == "top")
        {
            student.push_front(surname);
        } else if (temp == "bottom")
        {
            student.push_back(surname);
        }
        temp = "";
    }

    int m;
    int studentCount;
    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
        std::cin >> studentCount;
        std::cout << student[studentCount - 1] << std::endl;
    }

    return 0;
}
