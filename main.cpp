#include <iostream>

/**
 * @brief Adds two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int Add(int a, int b) {
  return a + b;
}

/**
 * @brief Main entry point.
 */
int main() {
  int result = Add(2, 3);
  std::cout << "Sum: " << result << std::endl;
  return 0;
}
