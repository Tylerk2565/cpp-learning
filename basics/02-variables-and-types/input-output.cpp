#include <iostream>

int main() {
  std::string name;
  int age;

  std::cout << "Enter your name: ";
  std::cin >> name;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Hi, " << name << "! You are " << age << " years old." << std::endl;
}

// std::cin gets input from the user and it waits until the user presses enter