//
//  Person.hpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <iostream>


class Person{
    
private:
    int age;
    
protected:
    std::string first_name;
    std::string last_name;
    std::string phone;
    
public:
    Person();
    Person(std::string, int, std::string, std::string);
    virtual void OutputIdentity()=0;
    virtual std::string OutputAge(int);
};
