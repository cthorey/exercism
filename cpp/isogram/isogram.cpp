#include "isogram.h"

using namespace std;

namespace isogram {
  bool is_isogram(string s) {
    bool result=true;

    for ( unsigned i = 0; i < s.length(); i++ ) {
      int count = 0;
      for (unsigned j = 0; j < s.length(); j++) {
        // converting to lowercase
        s[i] = tolower(s[i]);
        s[j] = tolower(s[j]);
        // Checking for dup
        if (s[i] == s[j] &&  isalpha(s[i])) {
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
