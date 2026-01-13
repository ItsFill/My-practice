#include <iostream>
#include <array>

template<typename InIter1, typename InIter2, typename Out>
Out SetDifference(InIter1 first1, InIter1 last1,
                  InIter2 first2, InIter2 last2,
                  Out res)
{
    while (*first1 != *last1 && *first2 != *last2)
    {
        if (*first1 < *first2)
        {
            *res = *first1;
            ++first1;
            ++res;
        } else if (*first1 > *first2)
        {
            ++first2;
        }
        else
        {
            ++first1, ++first2;
        }
    }
    while (!(first1 == last1))
    {
        *res = *first1;
        ++first1;
        ++res;
    }
    return res;
}

int main()
{
    std::array<int, 3> arr1 = {1, 3, 7};
    std::array<int, 5> arr2 = {2, 3, 4, 5, 6};
    std::array<int, 3> res = {0, 0, 0};
    SetDifference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), res.begin());
    for (auto i : res)
    {
        std::cout << i << " ";
    }

    return 0;
}