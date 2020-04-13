#include "hamming.h"

namespace hamming {
  int compute(string seq0, string seq1){
    int distance = 0;

    if (seq0.length() != seq1.length()) {
      distance=0;
      throw domain_error("Failed");
    }

    for (unsigned i=0; i < seq0.length(); i++){
      if (seq0[i] != seq1[i]){
        distance=distance+1;
      }
    }
    return distance;
  }

}  // namespace hamming
