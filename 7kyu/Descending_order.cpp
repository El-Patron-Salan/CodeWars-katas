#include <cinttypes>
#include <string>
#include <vector>
#include <algorithm>

std::uint64_t descendingOrder(uint64_t a){
    
    std::uint64_t size_a = std::to_string(a).length();

    if (size_a == 1)
        return a;

    std::vector<uint64_t> x;
    while (a != 0){

        x.push_back(a%10);
        a /= 10;
    }
    std::sort(x.begin(), x.end(), std::greater<uint64_t>());
    std::uint64_t new_a = 0;
    for (auto z : x){
        new_a = new_a * 10 + z;
    }
    return new_a;
}
