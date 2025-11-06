# Employee Class (Chapter 13)

A C++ console application that demonstrates object-oriented programming fundamentals, including class design, encapsulation, constructors, accessors, mutators, and formatted output. This assignment focuses on how classes are used to create and manipulate related data objects.

## Overview
- Defines a class `Employee` with private data members:
  - `name`
  - `idNumber`
  - `department`
  - `position`
- Provides multiple constructors:
  - **Default constructor** — initializes members to default/empty values.
  - **Overloaded constructor (full)** — accepts `name`, `idNumber`, `department`, and `position`.
  - **Overloaded constructor (partial)** — accepts only `name` and `idNumber`, leaving other members blank.
- Includes public member functions for data access and modification:
  - Mutators: `setName`, `setIdNumber`, `setDepartment`, `setPosition`
  - Accessors: `getName`, `getIdNumber`, `getDepartment`, `getPosition`
- Demonstrates object creation, initialization through constructors, and display of formatted results.

## Core Logic
- Creates three `Employee` objects with different initialization forms:
  1. Susan Meyers — 47899 — Accounting — Vice President  
  2. Mark Jones — 39119 — IT — Programmer  
  3. Joy Rogers — 81774 — Manufacturing — Engineer  
- Stores the objects in an array for iteration.
- Uses formatted output with `setw()` and alignment manipulators to print a clean table of employee data.

## Input Validation
- All data is initialized directly within the program (no runtime input required).
- No explicit validation is necessary for this assignment.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o EmployeeClass nazarioCPP213.cpp
  ./EmployeeClass
