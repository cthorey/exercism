#include "leap.h"

namespace leap {

  bool is_leap_year(int year) {
    bool result=false;
    if (year % 4 == 0) {
      if ( year % 100 == 0 && year % 400 !=0) {
        result = false;
      } else {
        result = true;
      }
    }
    else {
      result = false;
    }
    return result;
  }


}  // namespace leap
