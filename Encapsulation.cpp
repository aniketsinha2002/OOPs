//--------- ENCAPSULATION ------------

// ENCAPSULATION (Information Hiding / Data Hiding) -> Wrapping up data members and functions in a class.
// Data Members -> Properties / State
// Functions -> Methods / Behaviours

// FULL ENCAPSULATION -> Fully Encapsulated Class -> All Data Members are marked private.

// ADVANTAGES :
// 1. Data Hiding -> Increases Security
// 2. Allows making the class read-only
// 3. Enhances Code Reusability 
// 4. Helps in unit testing

// IMPLEMENTATION

#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age;
        int height;

    public:
        Student()
        {
            age = 10;
        }

        int getAge(){
            return this->age;
        }
};

int main()
{
    Student aniket;
    int myAge = aniket.getAge();
    cout << myAge;
    return 0;
}
