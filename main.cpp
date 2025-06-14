#include <iostream>

/**
 * @brief Adds two integers and returns the result.
 *?
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int Add(int a, int b) {
  return a + b;
}

/**
 * @brief Entry point of the program.
 *
 * @return int Exit status
 */
int main() {
  int result = Add(5, 3);
  std::cout << "Result: " << result << std::endl;
  return 0;
}
