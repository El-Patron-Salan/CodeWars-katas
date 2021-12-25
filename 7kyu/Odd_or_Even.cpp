#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    int sum = 0;
    for (auto& i : arr) {
        sum += i;
    }
    return (arr.size() == 0 || (sum % 2) == 0) ? "even" : "odd";
}