//
//  main.cpp
//  Fibonacci
//
//  Created by Denis Gladyshev on 11.06.2018.
//  Copyright © 2018 dengladyshev. All rights reserved.
//

#include <iostream>

int fibonacci_fast(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    int fibNumbers[n + 1];
    fibNumbers[0] = 0;
    fibNumbers[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2];
    }
    
    return fibNumbers[n];
}

int main(int argc, const char * argv[]) {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
