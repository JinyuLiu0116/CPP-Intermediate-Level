#include <iostream>

int main(){
  int* p_number{}; //will initialize with nullptr
  double* p_fractional_number{};

  int* p_number1{nullptr};//explicitly initialize with nullptr
  int* p_fractional_number1{nullptr};
  
  //pointer to different variables are have the same size
  std::cout << "sizeof(int):" << sizeof(int) << std::endl; // 4
  std::cout << "sizeof(double):" << sizeof(double) << std::endl; // 8
  std::cout << "sizeof(double*):" << sizeof(double*) << std::endl; // 8
  std::cout << "sizeof(int*):" << sizeof(int*) << std::endl; // 8
  std::cout << "sizeof(p_number1):" << sizeof(p_number1) << std::endl; // 8
  std::cout << "sizeof(p_fractional_number1*):" << sizeof(p_fractional_number1) << std::endl; // 8

  // format standard
  int * p_number2{};
  int  *p_number3{};
  int *p_number4{}, another_number4{};
  int* p_number5{}, another_number5{};

  std::cout << "sizeof(p_number4):" << sizeof(p_number4) << std::endl; // 8
  std::cout << "sizeof(another_number4):" << sizeof(another_number4) << std::endl; // 4
  std::cout << "sizeof(p_number5):" << sizeof(p_number5) << std::endl; // 8
  std::cout << "sizeof(another_number5):" << sizeof(another_number5) << std::endl; // 8
}
