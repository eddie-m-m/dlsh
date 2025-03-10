#include "../build/dlshConfig.h"
#include <iostream>


int main(int argc, char* argv[]) {
  if (argc < 2) {
  std::cout << argv[0] << " Version " << dlsh_VERSION_MAJOR << '.' << dlsh_VERSION_MINOR << '\n';
      return 1;
  }
  std::cout << "Welcome to dlsh!\n";

  return 0;
}
