//
//  main.cpp
//  GreatestCommonDivisor
//
//  Created by Denis Gladyshev on 11.06.2018.
//  Copyright © 2018 dengladyshev. All rights reserved.
//

#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main(int argc, const char * argv[]) {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
