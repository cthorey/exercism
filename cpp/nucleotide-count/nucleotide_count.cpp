#include "nucleotide_count.h"

namespace nucleotide_count {
  counter::counter(string sequence){
    state.insert(pair<char,int>('A',0));
    state.insert(pair<char,int>('T',0));
    state.insert(pair<char,int>('C',0));
    state.insert(pair<char,int>('G',0));
    for (unsigned i=0 ; i<sequence.length() ;i++){
      if (!valid_nucleotid(sequence[i])){
        throw invalid_argument("Failed");
      }
      state[sequence[i]]=state[sequence[i]]+1;
    }
  }

  map<char,int> counter::nucleotide_counts() const{
    return state;
  }

  bool counter::valid_nucleotid(char name) const {
    bool valid = false;
    for (pair<char,int> elt: state) {
      if (name == elt.first) {
        valid = true;
        break;
      }
    }
    return valid;
  }

  int counter::count(char name) const {
    if (!valid_nucleotid(name)){
      throw invalid_argument("Failed");
    }
    return state.at(name);
  }
}  // namespace nucleotide_count
