/*////////////////////////////////////////////
// OOP345 Workshop 1: Compound Types
// Name: Xiaochen Wang
// Date: 12/Sep/2017
// email: xwang345@myseneca.ca
///////////////////////////////////////////*/

#include <iostream>
#include <cstring>
#include "CString.h"

using namespace std;
namespace w1{
    //constructor checks if s is null, if so, set the string to a safe empty state
    //if s is not null, store as needed
    CString::CString(char* s){
       if(s == NULL){
          str[0] = '\0';
       }
       else{
          strncpy(str,s, MaxChar);
          str[MaxChar] = '\0';
       }
    }
    //display the string stored
    void CString::display(ostream& ostr){
       ostr << str;
    }
    //inserts the string stroed
    std::ostream& operator << (std::ostream& ostr, CString& src){
       static int count = 0;

       ostr << count++ << ": ";
       src.display(ostr);
       return ostr;
    }

}