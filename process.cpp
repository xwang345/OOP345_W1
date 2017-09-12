#include <iostream>
#include <cstring>
#include "process.h"
#include "CString.h"


void process (char* s){
   //construct the cstring object
   w1::CString cstr(s);
   //insert cstring object and add newline
   std::cout << cstr << std::endl;

}