#include <iostream>

void printBattery(int batteryPercent) {
  std::cout << "Battery Level: " << batteryPercent << "%" << std:: endl;

  if (batteryPercent < 20) {
    std::cout << "Warning: Low battery" << std::endl;
  }
}

int main() {
  std::cout << "Hello World" << std::endl;
  printBattery(75);
  
  return 0;
}
