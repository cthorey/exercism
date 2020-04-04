#include "isogram.h"


namespace isogram {


  bool is_isogram(std::string s) {
    bool result=true;

    for ( std::string::size_type i = 0; i < s.length(); i++ ) {
      int count = 0;
      for (std::string::size_type j = 0; j < s.length(); j++) {
        // converting to lowercase
        if (s[i] >= 'A' && s[i]<='Z') {
          s[i] = s[i] + 32;
        }
        if (s[j] >= 'A' && s[j]<='Z') {
          s[j] = s[j] + 32;
        }
        // Checking for dup
        if (s[i] == s[j] &&  s[i] != '-' && s[i]!= ' ') {
          count = count + 1;
        }
        if (count > 1) {
          result=false;
          break;
        }
      }
    }
    return result;
  }
}  // namespace isogram
