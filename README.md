# Classes and Objects in C++  

Name: Pal Jain  
PRN: 24070123067  
Class: ENTC A3

## Aim:  

To study and implement basic classes and objects in C++

# Theory

In C++, **classes and objects** form the core concepts of Object-Oriented Programming (OOP).  
They enable developers to bind **data** (variables) and **behavior** (functions, called methods) together in a single construct.  
A **class** serves as a plan or specification for creating objects, while an **object** is a functional instance built from that plan.  
**Methods** are functions that work directly on an object's data, defining what that object can do.  
**Access specifiers** like `public` and `private` play a crucial role in controlling which class members are accessible from outside, enforcing boundaries and promoting robust, modular code.  
This design methodology ensures **encapsulation**, maintains **data security**, and encourages code that’s both modular and maintainable.  

# Class

A **class** in C++ is declared using the `class` keyword.  
Unless otherwise stated, class members are **private** by default, keeping their data hidden.  
A well-designed class typically contains:  
- **Data Members**: variables—these are normally private to achieve better security.  
- **Member Functions**: functions, often public, that allow interaction with the class data.  
Consider a class as a **blueprint**—just like building plans for a house—it describes the structure but doesn’t actually create the house itself.

# Object

An **object** is a concrete entity created from a class definition.  
Whenever you instantiate an object, memory is set aside for its data members.  
You can have multiple independent objects of the same class, each storing its own data.  
Continuing the analogy, the **class is the plan**, while the **object is your finished house**.

# Methods (Member Functions)

**Member functions** bring objects to life by defining their possible activities or operations.  
They reside inside the class and can freely access the class’s own data.  
Member functions can be:  
- **Public**: meant for outside access, forming an interface for object interaction.  
- **Private**: reserved for internal use, supporting the class’s implementation but hidden from outside code.  
You can define methods **inside** the class body for simple functionality, or **outside** the class using the scope resolution (`::`) operator when separating interface and implementation.

# Access Specifiers in Detail

## 1. Public

Members declared using the `public:` keyword are accessible from both inside and outside the class.  
This is typically used for:  
- **Interface functions**: methods for interacting with your object  
- **Safe variables**: data that should be openly available  

## 2. Private

Anything labeled with `private:` (the default in C++) is available only inside the class.  
Private members protect sensitive information and help prevent unintended or insecure changes.  
Usual usage includes:  
- **Internal state**: variables like `balance`, `password`, or `rollNumber`  

# Comparison: Public vs. Private

| Feature        | Public Members           | Private Members                  |
|----------------|-------------------------|----------------------------------|
| Accessibility  | Anywhere                | Within the class only            |
| Usage          | Methods, safe variables | Sensitive data, internal logic   |
| OOP Role       | Interface for the user  | Data hiding, security, integrity |

# Why Use Public and Private?

Adopting a clear distinction between public and private members delivers the following benefits:  
- **Encapsulation** keeps sensitive internals protected.  
- **Security** stops unwanted access or tampering.  
- **Data Integrity** lets you validate input using public methods before making changes.  
- **Maintainability** ensures internal logic can be changed freely, without affecting users of your class.

# Defining Methods Inside and Outside a Class in C++

C++ offers two main modes for defining member functions:  
- **Inside the Class**: Write the function inside the class body. The compiler treats these as inline, making them suitable for simple, brief logic.  
- **Outside the Class**: Declare the function in the class and define it later using the scope resolution (`::`) operator—ideal for complex or lengthy operations, supporting a cleaner separation of interface and implementation.

***

# Programs on OOPS in C++

## Program 1: Calculator Class with Arithmetic Operations: 

**Logic:**  
Create a class to hold two numbers and implement methods to perform addition, subtraction, multiplication, and division. Inputs are taken from the user and results displayed accordingly.  

**Algorithm:**  
1. Start.  
2. Define class `Calculator` with two public float variables `a` and `b`.  
3. Define member functions to perform addition, subtraction, multiplication, and division; each function prints the result.  
4. In `main()`, create an object `c1` of the class.  
5. Input values for `c1.a` and `c1.b` from user.  
6. Call the arithmetic functions on `c1` to display results.  
7. End.

***

## Program 2:  Car Class with Multiple Object Input and Display:  

**Logic:**  
Design a class to hold car details and owner name. Input information for two cars and display the stored data for each.  

**Algorithm:**  
1. Start.  
2. Define class `Car` with attributes `member`, `name`, `brand`, `price`, and `year`.  
3. Create object `c1`.  
4. Prompt and input data for `c1`.  
5. Display the information of `c1`.  
6. Create object `c2`.  
7. Input data for `c2`.  
8. Display the information of `c2`.  
9. End.

***

## Program 3: Area of Rectangle using Class and Method

**Logic:**  
Represent a rectangle by its length and width. Check if the rectangle is a square, and if not, calculate and display the area.  

**Algorithm:**  
1. Start.  
2. Define class `rectangle` with `length` and `width`.  
3. Create member function `area()` to calculate and print area.  
4. Instantiate object `r1`.  
5. Input values of `r1.length` and `r1.width`.  
6. If `length` equals `width`, print “It is a square.”  
7. Else, invoke `area()` function on `r1`.  
8. End.

***

## Program 4: Student Class with Data Members Initialization and Display:  

**Logic:**  
Define a class representing student details such as name, branch, subject, year, and result. Create objects, assign values, and display student information.  

**Algorithm:**  
1. Start.  
2. Declare `Student` class with public data members.  
3. Create object `s1` and assign values to members.  
4. Print all members of `s1`.  
5. Create object `s2` with different values.  
6. Print all members of `s2`.  
7. End.

***

## Program 5: Methods Defined Inside and Outside a Class

**Explanation**  
Shows both ways of method definition in C++.  
`Volume()` is coded inside the class, while `myVolume()` is declared inside and defined later (using `::`) outside.  
Both functions compute and display the cuboid's volume.

**Algorithm**  
1. Start the program.  
2. Create `MyClass` with attributes `height`, `width`, `length`.  
3. Define `Volume()` function inside the class.  
4. Declare then define `myVolume()` outside the class using the scope resolution operator.  
5. In `main()`, create an object (`M1`) and call both methods to check their output.  
6. Stop.

***

## Program 6: Error Correction (Public/Private and Method Placement)

**Explanation**  
A corrected version of a `Cube` class, with dimensions as members and a `volume()` method to multiply these.  
Access specifiers are used properly, and previous bugs are fixed.

**Algorithm**  
1. Start the program.  
2. Define a `Cube` class with required data members.  
3. Implement the `volume()` method to calculate and print volume.  
4. Create an object of the `Cube` class.  
5. Set the required member values, then display the height and calculated volume.  
6. End.

***

# Conclusion

These exercises illustrate that **classes** are the building blocks of OOP in C++, acting as templates for reusable code.  
**Objects** are actual entities based on these templates, each storing its own data.  
**Member functions** enable direct manipulation of each object’s attributes, while **public** and **private** specifiers enforce a clear division between what users can see and what stays hidden for safety.  
Through practical cases like managing student data, vehicle records, calculations, and geometry, we see how C++ OOP supports **encapsulation, abstraction, and modular code design**—all vital skills for clean, effective software development.

