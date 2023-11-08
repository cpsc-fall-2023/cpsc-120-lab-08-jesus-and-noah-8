// Jesus Lara
// orlandolara@csu.fullerton.edu
// @jesuslara007
// Partners: @noahc813

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must spply at least one number.\n";
    return 1;
  }

  double sum{0.0};

  for (int i{1}; i < argc; i++) {
    double value = std::stod(arguments[i]);
    sum += value;
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
