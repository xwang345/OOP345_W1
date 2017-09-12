#pragma once

#ifndef CSTRING_H
#define CSTRING_H

using namespace std;

namespace w1{
    const int MaxChar = 3;

    class CString{
    private:
        char str[MaxChar +1];
    public:
        CString(char* s);
        void display(std::ostream& ostr);
    };
    std::ostream& operator << (std::ostream& ostr, CString& src);
}

#endif