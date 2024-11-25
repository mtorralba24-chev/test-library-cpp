#include "test-library-cpp.h"

#include <iostream>
#include <string>

void print_cool_output(int n) {
        for(int i = 1; i <= n; i++) {
                for(int j = i; j <= i; j++) {
                        std::cout << "*";
                }
                std::cout << std::endl;
        }
}
