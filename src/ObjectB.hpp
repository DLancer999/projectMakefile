#include <iostream>
#include "ObjectA.hpp"
using namespace std;

#ifndef OBJECTB_H
#define OBJECTB_H

class ObjectB:
    public ObjectA
{
public:
    ObjectB();
};

#endif
