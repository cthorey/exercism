#include "bob.h"

namespace bob {
  bool is_question(string msg){
    size_t idx;
    idx = msg.find('?');
    if (idx != string::npos && msg[idx+1]=='\t'){
      return true;
    }
    return msg.back() == '?';
  }

  bool is_empty(string msg){
    bool empty=true;
    for (unsigned i = 0; i < msg.length(); i++){
      if (msg[i] != ' ' && msg[i] != '\t' ) {
        empty=false;
        break;
      }
    }
    return empty;
  }

  bool is_screaming(string msg){
    int sletters=0;
    int letters=0;
    for (unsigned j = 0 ; j < msg.length() ; j++){
      if ( isalpha(msg[j]) ) {
        letters = letters + 1;
        if ( toupper(msg[j]) == msg[j] ) {
          sletters = sletters + 1;
        }
      }
    }
    return (sletters == letters && letters!=0);
  }

  string hey(string msg){
    string answer="";
    // cleanup the string
    regex r("\\s+");
    msg = regex_replace(msg,r,"");
    // cout << msg + '\n';
    if (is_empty(msg)) {
      answer = "Fine. Be that way!";
    } else if ( is_question(msg) && is_screaming(msg)){
      answer = "Calm down, I know what I'm doing!";
    } else if (is_question(msg)) {
      answer = "Sure.";
    } else if (is_screaming(msg)) {
      answer = "Whoa, chill out!";
    } else {
      answer = "Whatever.";
    }
    return answer;
  }

}  // namespace bob
