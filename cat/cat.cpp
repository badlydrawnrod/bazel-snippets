#include "catlib/catlib.h"

#include <iostream>

int main()
{
    Cat cat{"Dandilo"};
    std::cout << cat.Name() << " says 'Miaow'\n";
}
