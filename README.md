# Operator-Overloading

## Overview

I used overloaded operators so they interact in a custom way with objects.

## Features

- I just need to remember when I want to customise istream or ostream operators by using an inline, I need to use an ampersand of the object as I want to pass the reference to the operator and also yse friend keyword so I can access private members. Also that I remove the const in istream since I'm changing value.
- Most of the implementation is standard; compare the this pointer with the rhs for each member.
- I'm using the ampersand to pass by reference because I don't want to create unnecessary copies of variables and objects to save space and be efficient
- In member operator overloading I can use the this keyword as the function prototypes are defined inside the class
- In non member operator overloading the you can't use this and may need to use friend functions to access the private members

## Screenshot

<img width="661" height="246" alt="image" src="https://github.com/user-attachments/assets/174392bf-a29e-4662-b638-e4deaeeada6f" />

