//
//  Student.hpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#pragma once

#include <stdio.h>
#include "Person.hpp"

class Student: public Person {
    
public:
    Student();
    Student(std::string, int, std::string, std::string);
    virtual ~Student();
    
    virtual void OutputIdentity();
};
