#include "gigasecond.h"

using namespace boost;

namespace gigasecond {
  posix_time::ptime advance(posix_time::ptime time){
    posix_time::time_duration td = posix_time::seconds(1000000000);
    return time+td;
  }
}  // namespace
