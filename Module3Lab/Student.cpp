//
//  Student.cpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include "Student.hpp"


Student::Student(std::string fName, int age, std::string lName, std::string phone):Person(fName, age, lName, phone){
    
}

Student::~Student(){
    
}

void Student::OutputIdentity(){
    std::cout<<"I am a student"<<std::endl;
}

std::string Student::OutputAge(){
    return "I am a student";
}
