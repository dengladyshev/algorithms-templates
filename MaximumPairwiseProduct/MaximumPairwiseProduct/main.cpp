//
//  main.cpp
//  MaximumPairwiseProduct
//
//  Created by Denis Gladyshev on 31.05.2018.
//  Copyright © 2018 dengladyshev. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

long long maxPairwiseProduct(const std::vector<long long> & numbers) {
    long long n = numbers.size();
    
    long long maxIndex1 = -1;
    for (int i = 0; i < n; ++i) {
        if (maxIndex1 == -1 || numbers[i] > numbers[maxIndex1]) {
            maxIndex1 = i;
        }
    }
    
    long long maxIndex2 = -1;
    for (int i = 0; i < n; ++i) {
        if ((i != maxIndex1) && (maxIndex2 == -1 || numbers[i] > numbers[maxIndex2])) {
            maxIndex2 = i;
        }
    }
    if (maxIndex2 == -1) {
        return numbers[maxIndex1];
    }
    
    return numbers[maxIndex1] * numbers[maxIndex2];
}


int main(int argc, const char * argv[]) {
    int n = 0;
    std::cin >> n;
    
    if (n == 0) {
        std::cout << "0\n";
        return 0;
    }
    
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    long long result = maxPairwiseProduct(numbers);
    std::cout << result << "\n";
    
    return 0;
}
