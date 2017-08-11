#include <iostream>
#include <string>

#include <stdlib.h>

#define pass "welcome"

int main(){ 
  system("clear");

  std::string password;

  // Introduction of Banking System
  std::cout << "##################################" << std::endl;
  std::cout << "        ABHISHEK KARADBHUJE       " << std::endl;
  std::cout << "           BANKING SYSTEM         " << std::endl;
  std::cout << "##################################" << std::endl;

  int count = 3;

  RETRY: // Retry if password failed

  // Password as input for login
  std::cout << "\nEnter Password to login into the sytem: " << std::endl;
  std::cin >> password;
  count--;

  if ( password == pass ){
    std::cout << "Welcome to the Bank..." << std::endl;
    return 0;
  }

  else {
    std::cout << "Login failed "<< count << " attempts are remaining" << std::endl;
  }

  if ( count != 0 ) goto RETRY;
  return -1;
}
