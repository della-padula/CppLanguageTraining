//
//  main.cpp
//  CPP_Training
//
//  Created by denny on 2021/02/26.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a = 5;
    int b(3);
    int c{2};
    int result;
    
    a = a + b;
    result = a - c;
    std::cout << result << std::endl;
    
    return 0;
}
