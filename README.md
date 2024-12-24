A sample project illustrating how to perform unit testing with GoogleTest and CMake

## Mocking static functions

TLDR: Just run `bash ./run.sh`

Example code: `test/testbaz`

## Building

~~~
mkdir build
cd build
cmake ..
make
~~~

## Running

~~~
cd build && make test
~~~

or

~~~
build/test/testfoo/testfoo
~~~

Refer to [this blog post](http://kaizou.org/2014/11/gtest-cmake/) for a detailed explanation of how it works.
