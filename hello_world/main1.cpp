#include <iostream>
#include "math.h"
#include "utils.h"

int main() {
    int a = 10, b = 20;
    int result = add(a, b);
    
    std::cout << "Addition of " << a << " and " << b << " is " << result << std::endl;
    
    int num = -5;
    std::cout << "Is " << num << " positive? " << (isPositive(num) ? "Yes" : "No") << std::endl;

    return 0;
}
