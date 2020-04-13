#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
using namespace std;

namespace anagram {
  class anagram
  {
  private:
    string word;
    bool match(string);
  public:
    // constructor
    anagram (string name);
    // method
    vector<string> matches(vector<string> words);
  };
}  // namespace anagram

#endif // ANAGRAM_H
