#include <iostream>

/**
 * @brief Adds two integers.
 *
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
int Add(int a, int b) {
  return a + b;
}

/**
 * @brief Main function.
 */
int main() {
  int result = Add(2, 3);
  std::cout << "Result: " << result << std::endl;
  return 0;
}
