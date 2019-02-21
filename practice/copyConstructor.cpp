// Learning and experimenting with Copy Constructor
// without using smart pointers and other amazing C++ features
#include <iostream>
#include <string>
// WHAT WILL THIS CODE DO?
// define a class for strings
// 



class String {

private:
    char* m_Buffer;
    unsigned int m_Size;

public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer, string, m_Size);

    }


};



int main() {


    return 0;
}