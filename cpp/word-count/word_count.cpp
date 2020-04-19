#include "word_count.h"

namespace word_count {

  static inline void strip_punct(std::string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
          return !((ispunct(ch)) & (ch == '\''));
        }));
  }

  void strip_apos(string &s){
    if (ispunct(s.back())){
      s.erase(s.size()-1,s.size());
      }
    if (ispunct(s.front())){
      s.erase(0,1);
    }
  }


  map<string,int> words(string sentence) {
    vector<string> split_sentence;
    map<string,int> result;
    string word;

    boost::to_lower(sentence);
    strip_punct(sentence);
    boost::split(split_sentence,sentence,[](char c){
        return ((isblank(c) || ispunct(c))) & (c != '\'' );
      });

    for (unsigned i=0 ; i<split_sentence.size() ; i++){
      word = split_sentence[i];
      boost::trim(word);
      strip_apos(word);
      if (result.count(word)>0){
        result[word]=result[word]+1;
      }
      else if (word.size()>0) {
        result.insert(pair<string,int>(word, 1));
      }
    }
    return result;
  }
}  // namespace word_count
