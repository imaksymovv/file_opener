#include <iostream>
#include <cstdlib>
#include <string>

int main() {
  std::string path;
  getline(std::cin, path);

  for (int i = 0; i < 1000; i++) {
    std::system(path.c_str());
  }

	return 0;
}
			