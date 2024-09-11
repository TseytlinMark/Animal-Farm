//
// Created by ise on 1/7/22.
//
#include <iostream>
#include <exception>
using namespace std;
#ifndef PROJECT4__PROJECTSEXCEPTION_H
#define PROJECT4__PROJECTSEXCEPTION_H
class CowException:public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Insert valid number of cow farms";
    }
};
class SheepException:public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Insert valid number of sheep farms";
    }
};
class ChickenException:public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Insert valid number of chicken farms";
    }
};


#endif //PROJECT4__PROJECTSEXCEPTION_H
