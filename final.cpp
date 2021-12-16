#include <iostream>

void isrighttriangle(int s1,int s2,int s3){
  std::cout << "Is it a right triangle?"<< std::endl;
  if((s1)*s1 + (s2)*s2 == (s3)*s3){
    std::cout << "It is a right triangle!\n";
  } else {
    std::cout << "It is not a right triangle :( \n";
  }
}

void fizzbuzz(int integer){
  for (integer =1; integer<22; ++integer){
    std::cout << integer;
  if (integer % 15 == 0){
    std::cout << " fizzbuzz\n";
  } else if (integer % 3 == 0){
    std::cout << " fizz\n";
  } else if (integer % 5 == 0 ){
    std::cout << " buzz\n";
  } else {
    std::cout << "" << std::endl;
    }
  }
}

int main(){
  isrighttriangle(3,4,5);
  fizzbuzz(22);
  return 0;
}