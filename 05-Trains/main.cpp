#include <iostream>
#include <deque>
#include <cctype>
#include <string>

void MakeTrain() {
    // Ускоряем ввод, это критично для миллиона команд
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::deque<int> train;
    std::string user_input;
    std::string temp;

    while (std::cin >> user_input) {
        int train_carriage = 0;
        if (!(std::cin >> train_carriage)) break;

        temp = "";
        for (char i : user_input) {
            temp += (char)std::tolower((unsigned char)i);
        }

        if (temp == "+left") {
            train.push_front(train_carriage);
        } else if (temp == "+right") {
            train.push_back(train_carriage);
        } else if (temp == "-left") {
            if (train.size() < (size_t)train_carriage) {
                train.clear();
            } else {
                train.erase(train.begin(), train.begin() + (size_t)train_carriage);
            }
        } else if (temp == "-right") {
            if (train.size() < (size_t)train_carriage) {
                train.clear();
            } else {
                train.erase(train.end() - (size_t)train_carriage, train.end());
            }
        }
    }

    bool isFirst = true;
    for (int i : train) {
        if (!isFirst) std::cout << " ";
        std::cout << i;
        isFirst = false;
    }
    std::cout << "\n";
}