#include <iostream>
#include "creator.h"

using namespace std;

class Widget
{

};

class Gadget
{

};

template<template<typename> typename CreationPolicy>
class WidgetManager: public CreationPolicy<Widget>
{
public:

    void doSomething()
    {
        Gadget *p = CreationPolicy<Gadget>().create();
        delete p;
    }
};

typedef WidgetManager<OpNewCreator> MyWidgetManager;

int main()
{
    MyWidgetManager mgr;
    mgr.doSomething();
    return 0;
}

