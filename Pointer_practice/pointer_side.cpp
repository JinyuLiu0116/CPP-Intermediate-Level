#include <iostream>

int main(){
  int* p_number{}; //will initialize with nullptr
  double* p_fractional_number{};

  int* p_number1{nullptr};//explicitly initialize with nullptr
  int* p_fractional_number1{nullptr};
  
  //pointer to different variables are have the same size
  std::cout << "sizeof(int):" << sizeof(int) << std::endl;
  std::cout << "sizeof(double):" << sizeof(double) << std::endl;
  std::cout << "sizeof(double*):" << sizeof(double*) << std::endl;
  std::cout << "sizeof(int*):" << sizeof(int*) << std::endl;
  std::cout << "sizeof(p_number1):" << sizeof(p_number1) << std::endl;
  std::cout << "sizeof(p_fractional_number1*):" << sizeof(p_fractional_number1) << std::endl;
}
