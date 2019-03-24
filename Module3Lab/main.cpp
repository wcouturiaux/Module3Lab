//
//  main.cpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "Student.hpp"
#include "Teacher.hpp"

int main(int argc, const char * argv[]) {
    
    Student Student1("John", 31, "Smith", "555-142-1234");
    
    std::cout<<Student1.OutputAge()<<std::endl;
    Student1.OutputIdentity();
    
    Teacher *Teacher1 = new Teacher("Joh", 35, "Smit", "555-142-1235");
    
    std::cout<<Teacher1->OutputAge()<<std::endl;
    Teacher1->OutputIdentity();
    
    delete Teacher1;
    return 0;
}
