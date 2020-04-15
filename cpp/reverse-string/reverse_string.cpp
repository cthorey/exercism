#include "reverse_string.h"

namespace reverse_string {
  string reverse_string(string str){
    string rstr;
    for (unsigned i = 0 ; i < str.length() ; i++){
      rstr.push_back(str[str.length()-i-1]);
    }
    return rstr;
  }
}  // namespace reverse_string
