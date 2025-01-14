// Example 1: Object and Class in C++ Programming

// Program to illustrate the working of
// objects and class in C++ Programming
#include <iostream>
using namespace std;

//Create a Class
class Room
{
public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;

    return 0;
}

/*Note the use of the keyword public in the program. This means the members are public and can be accessed anywhere from the program.

As per our needs, we can also create private members using the private keyword. The private members of a class can only be accessed from within the class. For example,
 

class Test {

private:
 
    int a;
    void function1() { }

public:
    int b;
    void function2() { }
}
Here, a and function1() are private. Thus they cannot be accessed from outside the class.

On the other hand, b and function2() are accessible from everywhere in the program.*/