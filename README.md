# Experiment 14
To study and implement Inheritence

## Aim 
To study Inheritance

## Theory
Inheritance is a fundamental concept in C++ that allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class). This promotes code reusability and establishes a hierarchical relationship between classes.
### Key Concepts
1. **Base Class:** The class whose properties and methods are inherited.
2. **Derived Class:** The class that inherits from the base class.
3. **Access Specifiers:** Control the visibility of base class members in the derived class.
   - **They include:**
     - **Public Inheritance: Publ**ic members of the base class remain public, and protected 
       members  remain protected in the derived class.
     - **Protected Inheritance:** Public and protected members of the base class become protected 
       in the derived class.
     - **Private Inheritance:** Public and protected members of the base class become private in 
       the derived class.
> Syntax:
```cpp
class Base {
    // Base class members
};

class Derived : access_specifier Base {
    // Derived class members
};

```

### Types of Inheritance
1. **Single Inheritance:** A derived class inherits from one base class.

2. **Multiple Inheritance:** A derived class inherits from multiple base classes.
```cpp
class Base1 {};
class Base2 {};
class Derived : public Base1, public Base2 {};
```

3. **Multilevel Inheritance:** A class is derived from a derived class.
```cpp
class Base {};
class Derived1 : public Base {};
class Derived2 : public Derived1 {};
```

4. **Hierarchical Inheritance:** Multiple derived classes inherit from a single base class.
```cpp
class Base {};
class Derived1 : public Base {};
class Derived2 : public Base {};
```

## Algorithms
### Multiple Inheritance

1. **Start**

2. **Class Definition:**
   - **Define the `Vehicle` class with:**
     - **A public member variable `company` initialized to "Ford".**
     - **A public member function `type()` that prints "Mustang".**
   - **Define the `Specs` class with:**
     - **A public member variable `mileage` initialized to "8 kmph".**
     - **A public member function `colour()` that prints "Grey".**
   - **Define the `Car` class that inherits from both `Vehicle` and `Specs`:**
     - **A public member variable `seater` initialized to "4 seater".**

3. **Main Function:**
   - **Create an object `f2` of type `Car`.**
   - **Call the `colour()` function using `f2`.**
   - **Print the `company` member variable of `f2`.**
   - **Call the `type()` function using `f2`.**
   - **Print the `seater` member variable of `f2`.**
   - **Print the `mileage` member variable of `f2`.**

4. **End**

### Multilevel Inheritance
1. **Start**

2. **Class Definition:**
   - **Define the `Food` class:**
     - **Declare a public member variable `cuisine` initialized to "Indian".**
     - **Define a public member function `type()` that outputs "Asian".**
   - **Define the `Dish` class that inherits from `Food`:**
     - **Declare a public member variable `dish` initialized to "Biriyani".**
   - **Define the `Restaurant` class that inherits from `Dish`:**
     - **Declare a public member variable `name` initialized to "Spice Kitchen".**

3. **Main Function:**
   - **Create an object `myRestaurant` of type `Restaurant`.**
   - **Print the `name` member variable of `myRestaurant`.**
   - **Print the `cuisine` member variable of `myRestaurant`.**
   - **Print the `dish` member variable of `myRestaurant`.**
   - **Call the `type()` function on `myRestaurant` to output the type of cuisine.**

4. **End**

### Hierarchical Inheritance
1. **Start**

2. **Class Definition:**
   - **Define the `Jeans` class:**
     - **Declare a public array of strings `type` initialized with three values: "Bootcut", 
       "WideLeg","Skinny".**
     - **Define a public member function `brand()` that outputs "Brand: H&M - &Denim".**
   - **Define the `Bootcut` class that inherits from `Jeans`:**
     - **Declare a public member variable `color` initialized to "Dark Blue".**
   - **Define the `WL` class that inherits from `Jeans`:**
     - **Declare a public member variable `color` initialized to "Light Blue".**
   - **Define the `Skinny` class that inherits from `Jeans`:**
     - **Declare a public member variable `color` initialized to "Black".**

3. **Main Function:**
   - **Create an object `j1` of type `Bootcut`.**
   - **Create an object `j2` of type `WL`.**
   - **Create an object `j3` of type `Skinny`.**
   - **Print a newline for formatting.**
   - **Call the `brand()` function on `j1` and print the `type` and `color` of `j1`.**
   - **Call the `brand()` function on `j2` and print the `type` and `color` of `j2`.**
   - **Call the `brand()` function on `j3` and print the `type` and `color` of `j3`.**

4. **End**
