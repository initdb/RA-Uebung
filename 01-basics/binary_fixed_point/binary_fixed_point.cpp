#include <cstdlib>
#include <iostream>
#include "cnl/include/cnl/all.h"

int main()
{
    //TODO: declare a binary fixed point variable with a precision of 7 digits (after the point)
    //      Hint:    cnl::fixed_point<int, -precision>{0};
    //      Example: auto val = cnl::fixed_point<int, -2>{0};
    //      Details: https://johnmcfarlane.github.io/cnl/
    auto inc = cnl::fixed_point<int, -14>{0.8};
    auto val = cnl::fixed_point<int, -14>{0};

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


