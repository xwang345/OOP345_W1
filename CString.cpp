/*////////////////////////////////////////////
// OOP345 Workshop 1: Compound Types
// Name: Xiaochen Wang
// Date: 12/Sep/2017
// email: xwang345@myseneca.ca
///////////////////////////////////////////*/

#include "CString.h"
#include <cstring>
#include <iostream>
using namespace std;

namespace w1 {
    CString::CString(char * c)
    {
       if (c == NULL) {
          str[0] = '\0';
       }
       else {
          strncpy(str, c, MAX);
          str[MAX] = '\0';
       }
    }

    void CString::display(std::ostream & os) const
    {
       for(int i = 0; i < MAX;i ++)
          os << str[i];
    }

    std::ostream & operator<<(std::ostream & os, const CString & c)
    {
       static int i = 0;
       cout << i << ": ";
       i++;
       c.display(os);
       return os;
    }
}
