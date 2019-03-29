#include <iostream>
#include <cstdlib>
#include "decimal_for_cpp/include/decimal.h"

int main(void)
{
    //TODO: declare a decimal fixed point variable with a precision of 1 digit (after the point)
    //      Hint: dec::decimal<precision> val(initial_value);
    //      Details: https://github.com/vpiotr/decimal_for_cpp
    dec::decimal<1> inc(0.8);
    dec::decimal<1> val(0.0);

    for(int i = 1; i <= 500; ++i){
        //TODO: add 0.8 to your decimal point variable
        //      Hint: you may declare a inc variable to add
        val += inc;
    }

    // TODO: print the result to std out using output-stream
    //       Example: std::cout << "hello world" << std::endl
    std::cout << val << std::endl;

    return EXIT_SUCCESS;
}