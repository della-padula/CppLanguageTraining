//
//  Math.hpp
//  Cpp-Swift Practice
//
//  Created by denny on 2021/02/26.
//

#ifndef Greeting_hpp
#define Greeting_hpp

#include <string>
#include <iostream>

class Greeting {
public:
    Greeting();
    Greeting(const std::string &text);
    ~Greeting();

public:
    void sayHello();

    void setText(const std::string &text);
    const std::string &getText();
    
    void setNumber(const int number);
    int getNumber();

private:
    std::string m_text;
    int m_number;
};

#endif /* Greeting_hpp */
