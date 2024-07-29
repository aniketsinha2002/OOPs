// Concepts covered in the code: Classes, Constructors, Copy Constructors, Destructors, Access Modifiers, Deep Copy, Shallow Copy

#include <iostream>
// You can include the class from a different file like this:
// #include <Hero.cpp>

using namespace std;

// If nothing is inside the class, it still occupies 1 byte of memory by default.
class Hero {
    // Properties / Data Members / Member Functions of the class
    // By default, access modifiers in a class are private.
    
private:
    int value; // This data member can be accessed only within this class.
    
public:
    char *name; // This data member can be accessed outside the class.
    int health; // This data member can be accessed outside the class.
    int level;  // This data member can be accessed outside the class.
    
    // When we create any object, the 'Constructor' is called in both static and dynamic creation of the object. 
    // It gets invoked during the object creation time, has no return type, and by default, a default constructor is created if not explicitly defined.

    // DEFAULT CONSTRUCTOR
    Hero(){
        cout << "Default Constructor called" << endl;
        name = new char[100]; // Good practice to allocate in the heap.
    }
    
    // PARAMETERIZED CONSTRUCTOR
    // 'This' keyword -> it is a pointer -> the current object's address gets stored inside this.
    Hero(int value)
    {
        cout << "Parameterized Constructor called" << endl;
        this->value = value;
    }
    
    // COPY CONSTRUCTOR -> If we do not write our own copy constructor, the compiler will create one behind the scenes for us.
    // Need to pass by reference, not pass by value. If we pass by value -> a new copy will be created, will call the copy constructor, and create an infinite loop.
    // If passed by reference -> exactly pass the same object by reference.  
    
    Hero(Hero& tmp)
    {
        cout << "Copy Constructor called" << endl;
        
        // DEEP COPY 
        int cpy = tmp.value;
        this->value = cpy;
    }
    
    // DESTRUCTOR -> used to free memory / deallocate object from memory.
    // Objects created by static allocation -> Destructor gets called automatically when program flow goes out of scope.
    // Objects created dynamically -> we need to call the destructor manually.
    
    ~Hero(){
        cout << "Destructor called!! Hurrah, memory freed!! :D" << endl;
    }
    
    // Method to print the value of the private data member.
    void print() {
        cout << "Value is: " << value << endl;
    }
    
    // Getter function for the private data member 'value'.
    int getValue() {
        return value;
    }
    
    // Setter function for the private data member 'value'.
    void setValue(int val) {
        value = val;
    }
};

int main() {
    // STATIC ALLOCATION: Creating an object of the Hero class
    Hero h1;
    
    // Setting the health property
    h1.health = 70;
    
    // Accessing and printing the health property
    cout << "Health is: " << h1.health << endl;
    
    // Setting the value of the private data member using the setter function.
    h1.setValue(123);
    
    // Printing the private data member using the print method
    h1.print();
    
    // DYNAMIC ALLOCATION
    Hero *h2 = new Hero; // h2-> address -> dereference that to get value
    
    (*h2).setValue(321);
    (*h2).print();
    // Can write this way too
    h2->print();
    
    // Manually call the destructor for object created using dynamic allocation
    delete h2;
    
    // Creating another object with parameterized constructor
    Hero h3(10);
    h3.print();
    
    // Concept of COPY CONSTRUCTOR
    Hero suresh;
    suresh.setValue(999);
    suresh.print();
    
    Hero ritesh(suresh);
    ritesh.print();
    
    // Default Copy Constructor does SHALLOW COPY (accessing the same memory by two names -> h5.anyProperty and h6.anyProperty)
    // Create an object h5, h6 -> copy constructor, h5.anyProperty gets changed, h6.sameProperty gets changed too.
    
    // DEEP COPY -> another copy
    
    return 0;
}