#if !defined(BOB_H)
#define BOB_H

#include <string>
#include <iostream>
#include <algorithm>
#include <regex>
#include<stdio.h>
#include<ctype.h>

using namespace std;

namespace bob {

  bool is_question(string msg);
  bool is_empty(string msg);
  bool is_screaming(string msg);
  string hey(string msg);

}  // namespace bob

#endif // BOB_H
