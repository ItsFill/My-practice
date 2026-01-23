#include <iostream>
#include <vector>


int main()
{
    int places = 0;

    std::cin >> places;

    if (places > 20000) return 0;

    std::vector<int> seats(places + 1);

    for(int i = 1; i <= places; i++)
    {
        int seatNum = 0;
        if (i > 0 && i <= places)
            std::cin >> seatNum;
        seats[seatNum] = i;
    }

    for (int i = 1; i <= places; i++)
        std::cout << seats[i] << " ";
    std::cout << std::endl;


    return 0;
}