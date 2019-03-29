#include <stdlib.h> //EXIT_SUCCESS
#include <stdio.h>  //printf

int main()
{
    float inc = 0.8f;
    float result = 0.0f;

    //TODO: implement
    for(int i = 1; i <= 500; i++)
    {
        result += inc;
    }

    printf("result is: %0.7f", result);

    return EXIT_SUCCESS;
}