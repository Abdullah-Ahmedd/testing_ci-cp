#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Simple function to demonstrate functionalityu
int add(int a, int b) {
    return a + b;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "=== CI Test Program ===" << std::endl;
    std::cout << "Repository: testing_ci-cp" << std::endl;
    std::cout << "Testing basic C++ functionality..." << std::endl;
    
    // Test 1: Basic arithmetic
    int result = add(5, 3);
    std::cout << "\n✓ Test 1 - Addition: 5 + 3 = " << result << std::endl;
    
    // Test 2: String operations
    std::string message = "Hello, CI!";
    std::transform(message.begin(), message.end(), message.begin(), ::toupper);
    std::cout << "✓ Test 2 - String transform: " << message << std::endl;
    
    // Test 3: Vector operations
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    std::cout << "✓ Test 3 - Vector sum: " << sum << std::endl;
    
    // Test 4: Prime number check
    int testNumber = 17;
    if (isPrime(testNumber)) {
        std::cout << "✓ Test 4 - Prime check: " << testNumber << " is prime" << std::endl;
    } else {
        std::cout << "✓ Test 4 - Prime check: " << testNumber << " is not prime" << std::endl;
    }
    
    // Test 5: Algorithm usage
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};
    std::sort(data.begin(), data.end());
    std::cout << "✓ Test 5 - Sorted array: ";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i < data.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    std::cout << "\n🎉 All tests completed successfully!" << std::endl;
    std::cout << "CI is working correctly!" << std::endl;
    
    return 0; // Success exit code
}
