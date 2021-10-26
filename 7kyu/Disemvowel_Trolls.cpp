#include <string>

std::string disemvol(const std::string& str){
    std::string sentence_to_return;
    for(std::string::size_type i = 0; i < str.size(); ++i){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||
        str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            continue;
        }
        sentence_to_return.push_back(str[i]);
    }
    return sentence_to_return;
}
