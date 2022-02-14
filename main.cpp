#include <iostream>

int getOperation(std::string operation);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divi(int x, int y);


int main() {
  std::string operation;
  std::cout << "What do you want to do? (add, subtract, multiply, or divide)" << std::endl;
  std::cin >> operation;
  getOperation(operation);
    return 0;
}

int getOperation(std::string operation) {
  int output;
  int num1;
  int num2;
  if (operation == "add") {
    std::cout << "What is the first number you want to add? \n";
    std::cin >> num1;
    std::cout << "What is the second number you want to add? \n";
    std::cin >> num2;
    std::cout << "The answer is " << add(num1, num2) << std::endl;
  } else if(operation == "subtract") {
    std::cout << "What is the first number you want to subtact? \n";
    std::cin >> num1;
    std::cout << "What is the second number you want to subtract? \n";
    std::cin >> num2;
    std::cout << "The answer is " << sub(num1, num2) << std::endl;
  }
  else if(operation == "divide") {
    std::cout << "What is the first number you want to divide? \n";
    std::cin >> num1;
    std::cout << "What is the second number you want to divide? \n";
    std::cin >> num2;
    std::cout << "The answer is " << divi(num1, num2) << std::endl;
  } else if(operation == "multiply") {
    std::cout << "What is the first number you want to multiply? \n";
    std::cin >> num1;
    std::cout << "What is the second number you want to multiply? \n";
    std::cin >> num2;
    std::cout << "The answer is " << mul(num1, num2) << std::endl;
  }
  return output;
  }

int add(int x, int y) {
  return x + y;
}
int sub(int x, int y) {
  return x - y;
}
int mul(int x, int y) {
  return x * y;
}
int divi(int x, int y) {
  return x / y;
}
