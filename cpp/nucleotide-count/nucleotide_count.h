#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <iostream>

using namespace std;

namespace nucleotide_count {
  class counter
  {
  private:
    map<char,int> state;
    bool valid_nucleotid(char) const;
  public:
    // constructor
    counter (string sequence);
    // method
    map<char,int> nucleotide_counts() const;
    int count(char name) const;
  };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
