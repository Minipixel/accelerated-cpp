#include <iostream>
#include <string>

int main()
{
  // ask for person's name
  std::cout << "Please enter your name: ";

  // read the name
  std::string name;
  std::cin >> name;

  // greet
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}
