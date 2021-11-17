#include <vector>

int square_sum(const std::vector<int>& numbers){
    unsigned sum = 0;
    for (unsigned i=0; i<numbers.size(); ++i ){
        sum += numbers.at(i) * numbers.at(i);
    }

    return sum;
}
