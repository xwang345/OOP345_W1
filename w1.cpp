#pragma once
#include <iostream>
#include <cstring>
#include "process.h"
#include "CString.h"

using namespace std;

int main(int argc, char* argv[]){
   cout<< "Command Line:";

   for(int i = 0; i < argc; i++){
      cout << " " << argv[i] ;
   }

   cout << endl;

   if(argc <= 1){
      cout << "Insufficient number of arguments (min 1)" << endl;
      return 1;
   }

   cout<<"Maximum number of characters stored : " << w1::MaxChar << endl;

   for(int j = 1; j < argc; j++){
      process(argv[j]);
   }

   return 0;
}