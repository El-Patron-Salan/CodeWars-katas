#include <vector>
#include <cmath>
#include <algorithm>

class Same {
        public :
                static bool comp(std::vector<int>&a, std::vector<int>&b) {
/*
                    if ( a.size() == b.size()){
                        for (int i=0; i<=a.size();){
                            for (int j = i; j<a.size(); ++j){
                                    if (a[i] == sqrt(b[j])){
                                        a.erase(i); 
                                        b.erase(j);
                                        if (a.size() == 0 && b.size() == 0)
                                            return true;
                                    }
                                    return false;
                            }
                        }
                    }
                    return false;
                
*/

                    if (a.size() != b.size()) return false;
                    std::sort(a.begin(), a.end());
                    std::sort(b.begin(), b.end());

                    for (unsigned long i = 0; i <= a.size(); ++i){
                        if (a[i] != sqrt(b[i])) return false;
                    }
                    return true;
                }
                
};
