#### Inheritance

Inheritance allows a class to inherit properties and methods from another class.

- **Real-life example**: A child inherits traits from their parents. Similarly, a class "Car" can inherit from a class "Vehicle."

#### Polymorphism

Polymorphism allows objects to be treated as instances of their parent class rather than their actual class.

- **Real-life example**: A person can be a teacher, parent, or friend. Similarly, a method "drive" can behave differently when applied to a "Car" or a "Bike."

#### Encapsulation

Encapsulation restricts direct access to some of an object's components, which can prevent the accidental modification of data.

- **Real-life example**: A capsule with medicine inside. Similarly, class fields are kept private and accessed via public methods.

#### Abstraction

Abstraction hides complex implementation details and shows only the necessary features.

- **Real-life example**: Using a TV remote without knowing its internal workings. Similarly, an abstract class "Shape" with a method "draw" implemented differently by subclasses like "Circle" and "Square."

### Diamond Problem

The diamond problem occurs in multiple inheritance scenarios where a class inherits from two classes that have a common base class, leading to ambiguity.

- **Example**: Class B and Class C both inherit from Class A, and Class D inherits from both B and C. Which version of A's method should D inherit?

Inheritance Ambiguity -> C inherits from A and B
e.g., Youtuber class inherits from Speak class and Bark class.
Now suppose Speak and Bark have the same function name inside their classes and Youtuber inherits from both,
which means both with the same function name got into that class. So which one will be called first? -> Resolve by scope resolution operator :: e.g., youtuber1.speak::func(), youtuber1.bark::func()

### Operator Overriding vs. Operator Overloading

- **Operator Overriding**: Typically used in languages supporting inheritance, allowing a subclass to provide a specific implementation of a method already defined in its superclass.
- **Operator Overloading**: Allows defining custom behavior for operators (like +, -, \*) in user-defined types.
  - **Example**: In C++, overloading the + operator to add two complex numbers.

### Exception Handling

#### Try and Catch Blocks

- **Try block**: Contains code that might throw an exception.
- **Catch block**: Handles the exception thrown by the try block.

  - **Example**:

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        try {
            int divisor = 0;
            if (divisor == 0) {
                throw 505;
            }
        } catch (int receive_throw) {
            cout << "An error occurred: " << receive_throw << endl; // Handle the exception
        }
        cout << "Rest of the code..." << endl;
        return 0;
    }
    ```

#### Garbage Collection in Java and C++

- **Java**: Automatic garbage collection. The JVM takes care of deallocating memory that is no longer in use.
- **C++**: Manual memory management using `delete` for deallocating memory. Smart pointers (`std::unique_ptr`, `std::shared_ptr`) can help manage memory automatically.
