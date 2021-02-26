//
//  Greeting.cpp
//  Cpp-Swift Practice
//
//  Created by denny on 2021/02/26.
//

#include "Greeting.hpp"
#include <iostream>

Greeting::Greeting():m_text() {}
Greeting::Greeting(const std::string &text): m_text(text) {}
Greeting::~Greeting() {}

void Greeting::sayHello() {
    std::cout << "Hello world!" << std::endl;
    
}

void Greeting::setText(const std::string &text) {
    m_text = text;
}
const std::string &Greeting::getText() {
    return m_text;
}

void Greeting::setNumber(const int number) {
    m_number = number;
}

int Greeting::getNumber() {
    return m_number;
}
