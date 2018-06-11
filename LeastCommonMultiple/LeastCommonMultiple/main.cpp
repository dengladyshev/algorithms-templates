//
//  main.cpp
//  LeastCommonMultiple
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

long long lcm(int a, int b) {
    return ((long long)a * (long long)b) / gcd(a, b);
}

int main(int argc, const char * argv[]) {
    int a, b;
    std::cin >> a >> b;
    std::cout << lcm(a, b) << std::endl;
    return 0;
}
