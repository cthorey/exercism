#include "anagram.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

namespace anagram {
  // constructor
  anagram::anagram(string name){
    std::transform(name.begin(),name.end(),name.begin(),::tolower);
    word=name;
  }

  // method match
  bool anagram::match(string s){
    bool result = true;
    string keyword = word;
    size_t idx;
    std::transform(s.begin(),s.end(),s.begin(),::tolower);

    // not the same length
    if (s.length() != word.length()){
      return false;
    }

    // same words
    if (s==word){
      return false;
    }
    
    // test of anagrams
    for (unsigned i=0; i< s.length(); i++) {
      idx = keyword.find(s[i]);
      if ( idx == string::npos) {
        result = false;
        break;
      } else {
        keyword.erase(idx,1);
      }
    }
    return result;
  }

  // method
  vector<string> anagram::matches(vector<string> words){
    vector<string> results;
    for (unsigned j=0; j < words.size(); j++){
      if ( match(words[j]) ){
        results.push_back(words[j]);
      }
    }
    return results;
  }
}  // namespace anagram
