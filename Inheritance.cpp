//------ INHERITANCE ----------

// Inheritance is a mechanism of reusing and extending existing classes without modifying them, 
// thus producing hierarchical relationships between them. 
// Inheritance is almost like embedding an object into a class.
// Class B inherits a few properties of class A.

#include <iostream>
using namespace std;

// Super class / Parent class
class Human
{ 
   public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return age;
    }
};

// MODE OF INHERITANCE -> Public, Protected, Private

// Parent class | Mode of inheritance -> Resultant
// -------------------------------------------------
// public       | public      -> public
// public       | private     -> private
// public       | protected   -> protected
// protected    | public      -> protected
// protected    | protected   -> protected
// protected    | private     -> private
// private      | public      -> NOT ACCESSIBLE
// private      | private     -> NOT ACCESSIBLE
// private      | protected   -> NOT ACCESSIBLE

// CONCLUSION -> Private data members of any class cannot be inherited

// Sub class / Child class
// Inheritance mode protected -> protected
// Protected -> Child class can access its data members after inheritance inside its own class. 
// Hence, data members of the parent class become protected after inheriting them 
// -> means height, weight, age inside Male are now protected.
class Male : protected Human
{ 
    public:
    void mGender()
    {
        cout << "This is male" << endl;
    }

    void setWeight(int wt)
    {
        weight = wt;
    }
    int getWeight()
    {
        return weight;
    }
};

// TYPES OF INHERITANCE - Single, Multilevel, Multiple, Hybrid, Hierarchical
// SINGLE INHERITANCE -> Male inherited properties of Human (Example Above)
// MULTILEVEL INHERITANCE -> A (parent class) to B (inherited from A), B to C (inherited from B) 
//                           e.g., Animal -> Dog -> German Shepherd
// MULTIPLE INHERITANCE -> C inherits from A and B 
//                         e.g., Youtuber class inherits from Speak class and Bark class
//                         class Youtuber : public Speak, public Bark {};
// HIERARCHICAL INHERITANCE -> One class serves as a parent class for more than one class 
//                             e.g., A (parent class), child classes B, C, and D inherit properties from A
// HYBRID INHERITANCE -> Combination of more than one type of inheritance

// Inheritance Ambiguity -> C inherits from A and B 
// e.g., Youtuber class inherits from Speak class and Bark class. 
// Now suppose Speak and Bark have the same function name inside their classes and Youtuber inherits from both, 
// which means both with the same function name got into that class. So which one will be called first? 
// -> Resolve by scope resolution operator :: 
//    e.g., youtuber1.speak::func(), youtuber1.bark::func()

int main()
{
    Male m1;
    m1.setWeight(65);
    cout << m1.getWeight() << endl;
    m1.mGender();
    return 0;
}
