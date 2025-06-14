#include <iostream>

int Add(int a, int b) {
  return a + b;
}

int main() {
  int result = Add(3, 4);
  std::cout << "Result: " << result << std::endl;
  return 0;
}
