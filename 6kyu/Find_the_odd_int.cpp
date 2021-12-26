#include <vector>

int findOdd(const std::vector<int>& numbers){
	for (auto& i : numbers) {
		int freq_count = std::count(numbers.begin(), numbers.end(), i);
		if (freq_count % 2 != 0) {
			return i; 
		}
	}
	return 0;
}