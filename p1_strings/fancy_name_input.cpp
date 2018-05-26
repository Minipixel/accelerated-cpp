#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your name: ";
  std::string name;
  std::cin >> name;

  // build the fancy message
  const std::string greeting = "Hello, " + name + "!";

  // build 2nd and 4th lines
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";

  // build 1st and 5th lines
  const std::string first(second.size(), '*');

  // write all
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}
