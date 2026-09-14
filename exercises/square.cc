/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Hdez. Aceituno
 * @date 14 Sep 2026
 * @brief Computes the Sum of the squares of the first n natural numbers. 
 */

#include <iostream>

int main() {
  unsigned long number{0}, sum{0};
  std::cout << "Enter any number: ";
  std::cin >> number;
  for (int i{1}; i <= number; ++i) {
    sum += i * i;
  }
  std::cout << "The sum of the squares of all integer values between 1 and "
            << number << " is " << sum << std::endl;
  return 0;
}
