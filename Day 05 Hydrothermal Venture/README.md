Day 05 Hydrothermal Venture
1. For 5-1, the code is sensitive to how the C++ Compiler interprets the standard input.
Hence, some compilers may require a newline after the last input and some might not.

Like, CodeChef IDE with C++14 GCC 6.3 and C++17 GCC 9.1 requires a newline for every getline.
JDoodle IDE with GCC 11.1.0 does not.

2. Note the fact that the stringstream object is inside the loop.
Putting it oustide the loop results in only one line being read.