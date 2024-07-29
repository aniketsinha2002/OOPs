// ----- POLYMORPHISM --------
// Existing in multiple forms
// Example: A father can exist in multiple forms as a father, brother, son, husband

// TWO TYPES: Compile Time Polymorphism, Run Time Polymorphism

//---------------------------------------------
// Compile Time Polymorphism 

// Two types -> Function Overloading, Operator Overloading

// Function Overloading -> Parameter change can achieve function overloading 
// -> Functions can be created with the same name but with different parameters

// Operator Overloading -> 
// Example: '+' can be used to add numbers, concatenate strings, or as a function for subtraction
//----------------------------------------------

// Run Time Polymorphism -> Dynamic Polymorphism
// Function / Method Overriding
// Rules -> Method of parent and child class must be the same and must have the same parameters 
// and this can be achieved through inheritance only

#include <iostream> 
using namespace std;

class A {
    public:
    int a;
    int b;

    // Function Overloading
    void sayHello() {
        cout << "Hello.." << endl;
    }

    void sayHello(string name) {
        cout << "Hello.. " << name << endl;
    }

    // Operator Overloading
    void operator+ (A &obj) {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output: " << val2 - val1 << endl;
    }
};

// Run Time Polymorphism - Method Overriding
class Human {
    public:
    void voice() {
        cout << "Speaking.." << endl;
    }
};

class Dog : public Human {
    public:
    void voice() {
        cout << "Barking.." << endl;
    }
};

int main() {
    // Function Overloading
    A obj;
    obj.sayHello();
    obj.sayHello("Aniket");

    // Operator Overloading
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    // Run Time Polymorphism - Method Overriding
    Dog labrador;
    labrador.voice();

    return 0;
}
