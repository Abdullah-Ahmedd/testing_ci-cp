#include <iostream>

/**
 * @brief Adds two integers and returns the result.
 *
 * @param a First integer.
 * @param b Second integer. 
 * @return Sum of a and b.
 */
int Add(int a, int b) {
  return a + b;
}

/**
 * @brief Main function.
 *
 * @return Exit code.
 */
int main() {
  int result = Add(2, 5);
  std::cout << "Result: " << result << std::endl;
  return 0;
}
