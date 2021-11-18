#include <string>
#include <cstring>

bool XO(const std::string& str){

    char x[str.size() + 1];
    strcpy(x, str.c_str());
    
    int c_o = 0, c_x = 0;

    for (unsigned long i = 0; i < str.size(); ++i){
        if (x[i] == 'o' || x[i] == 'O') c_o++;
        if (x[i] == 'x' || x[i] == 'X') c_x++;
    }
    if (c_o == c_x) return true;
    return false;


}
