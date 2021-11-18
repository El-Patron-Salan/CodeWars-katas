#include <vector>

int positive_sum (const std::vector<int> arr){
  if (arr.empty()) return 0;
  int sum = 0;
  for (unsigned long i = 0; i < arr.size(); ++i){
    if (arr[i] < 0) continue;
    sum += arr[i];
  }
  return sum;
}
