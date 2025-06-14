#include <iostream>
#include <vector>

// This function has intentional issues
int problematicFunction() {
    // Unused variable (will trigger -Wextra warning, treated as error by -Werror)
    int unusedVar = 42;
    
    // Missing return statement (will cause compilation error)
    // return 0;
}

int main() {
    std::cout << "=== CI Failure Test Program ===" << std::endl;
    std::cout << "This program is designed to fail compilation!" << std::endl;
    
    // Call the problematic function
    int result = problematicFunction();
    
    // This code will never be reached due to compilation failure
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
