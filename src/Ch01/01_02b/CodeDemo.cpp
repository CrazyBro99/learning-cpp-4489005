// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdint>

#define  CAPACITY 5000
#define DEBUG 

int main() {
  //itt azt mutatja meg hogy miért fontos előre behívni az egyes librariket
  int32_t large = CAPACITY;
  uint8_t small = 37;
  #ifdef DEBUG
  std::cout<< "[About the perform the addition]" << std::endl;
  #endif
  large += small;
  std::cout<<"The large interger is " << large << std::endl;

  std::cout << std::endl << std::endl;

  /* Ez az a rész ahol bekérsz egy nevet és egy üzenettel visszadobja 
    std::cout << "Add meg a szánalmas nevedet" << std:: endl;
    std::string str;
    std::cin>> str;
    std::cout << std::endl << std:: endl;
    std::cout<< "A te gyönyörű neved nem más mint:" << str << std::endl;
    std::cout << std::endl << std:: endl;

    auto c = "cigány";
    auto d = 3.14F;

    std::cout << "Type of a C is : " << typeid(c).name() << std::endl;
*/
   return(0);
}
