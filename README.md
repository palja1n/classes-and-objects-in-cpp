# Classes and Objects in C++  

## Aim:  

To study and implement basic classes and objects in C++.

## Theory:  

Classes and objects form the foundation of object-oriented programming in C++. A **class** is a user-defined blueprint that encapsulates data members (attributes) and member functions (methods) representing behavior. An **object** is an instance of a class that holds actual values stored in memory.  

Object-oriented principles such as encapsulation, abstraction, inheritance, and polymorphism allow programmers to create modular, reusable, and maintainable code. Encapsulation helps hide internal class details via access specifiers (`public`, `private`, `protected`), exposing only what is necessary. Constructors initialize objects automatically, and destructors handle cleanup.  

Working with classes and objects provides a natural, real-world modeling of entities and their interactions. These concepts facilitate large program development by breaking down complex problems into manageable units.  

***

## Example 1: Calculator Class with Arithmetic Operations: 

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

## Example 2: Student Class with Data Members Initialization and Display:  

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

## Example 3: Rectangle Class with Area Calculation and Square Check:  

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

## Example 4: Car Class with Multiple Object Input and Display:  

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

# Conclusion:

Through these examples, we have explored fundamental concepts of classes and objects in C++, including data encapsulation, member functions, object instantiation, and simple class-based operations. Understanding these basics lays the foundation for more advanced object-oriented programming principles and real-world application development in C++. Mastering classes and objects improves code organization, reusability, and modularity, essential skills for any C++ programmer.
