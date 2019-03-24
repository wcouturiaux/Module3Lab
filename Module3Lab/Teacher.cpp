//
//  Teacher.cpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include "Teacher.hpp"

Teacher::Teacher(std::string fName, int age, std::string lName, std::string phone):Person(fName, age, lName, phone){
    
}

Teacher::~Teacher(){
    
}

void Teacher::OutputIdentity(){
    std::cout<<"I am a Teacher Identity"<<std::endl;
}

std::string Teacher::OutputAge(){
    Person::OutputAge();
    return "I am a Teacher Age";
}
