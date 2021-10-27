#include <string>
#include <iostream>

std::string duplicate_encoder(const std::string& word){
    std::string encoded;

    for( std::string::size_type i = 0; i < word.size(); ++i ){
        for( std::string::size_type j = i + 1; j < word.size(); ++j ){

            if(word[i] == word[j]){
                encoded.push_back(')');
            }
            encoded.push_back('(');
        }
    }
    return encoded;
}

int main(){

    std::cout << "Test --> " + duplicate_encoder("din") << std::endl;
    return 0;
}
