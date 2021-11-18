#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  if (repeat == 0) return "";
  auto x = str;
  for (size_t i = 1; i < repeat; ++i){
    x += str;
  }
  return x;
}
