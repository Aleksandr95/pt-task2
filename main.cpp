#include <iostream>
#include <oop.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base1;

    cout << "* Create Object child" << endl;
    Child child1;

    cout << "* Call method func() for object base" << endl;
    Function(base1);

    cout << "* Call method func() for object child" << endl;
    Function(child1);
    cout <<" Lg" << endl;
    return 0;
}
