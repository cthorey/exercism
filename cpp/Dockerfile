FROM library/gcc

# cmake install
RUN mkdir ~/temp &&\
  cd ~/temp &&\
  wget https://cmake.org/files/v3.14/cmake-3.14.5.tar.gz &&\
  tar -xzvf cmake-3.14.5.tar.gz &&\
  cd cmake-3.14.5/ &&\
  ./bootstrap && make -j4 &&\
  make install

WORKDIR /workdir
