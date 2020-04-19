#if !defined(WORD_COUNT_H)
#define WORD_COUNT_H

#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

namespace word_count {

  void strip_apos(string &s);
  map<string,int> words(string sentence);

}  // namespace word_count

#endif // WORD_COUNT_H
