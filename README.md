# Animal Farm System in C++

## Project Overview
This project was developed as part of the "Advanced Programming" course. The goal was to design and implement a system using Object-Oriented Programming (OOP) principles, specifically focusing on polymorphism, design patterns, and exception handling. The project simulates a farm management system with various types of animals and farms, culminating in a comprehensive final project for the course.

## Features

### Classes Implemented:
- **Animal Classes:**
  - `Cow`
  - `Sheep`
  - `Chicken`
  
- **Farm Classes:**
  - `CowFarm`
  - `SheepFarm`
  - `ChickenFarm`
  
- **Other Components:**
  - `Market` (Control Unit System)
  - `Exceptions` (for handling errors)
  - `farmMarket.cpp` (Menu functionality)
  
- **Supporting Files:**
  - Header (`.h`) and Source (`.cpp`) files for all classes
  - `Makefile` for compiling the project

### Design Patterns:
- **Observer Pattern:** Implements a publish-subscribe mechanism to notify farms of changes in the market.
- **Factory Pattern:** Used to dynamically create different types of animals and farms based on user input.

## Technology Stack
- **Language:** C++
- **Concepts:** Object-Oriented Programming, Polymorphism, Design Patterns, Exception Handling

## Usage
This project simulates a farm system where users can manage farms, interact with the market, and perform operations on animals. It is a great resource for understanding advanced OOP concepts like polymorphism and design patterns in practice.

To run the project:
1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/animal-farm-cpp.git
    ```
2. Compile the project using the provided Makefile:
    ```bash
    make
    ```
3. Run the compiled executable:
    ```bash
    ./AnimalFarm
    ```

## How It Works
The system is built around the concept of managing different types of farms, each containing a specific type of animal. The `Market` class acts as the control unit, interacting with farms and handling the buying and selling of animals. The `Main.cpp` file provides a menu system for user interaction, allowing users to manage the farms, view animals, and handle market operations.

Key highlights of the project:
- **Polymorphism:** The animal and farm classes use polymorphic behavior to handle different types of animals and farms in a unified way.
- **Design Patterns:** The observer and factory patterns allow for flexible creation and notification of objects in the system, demonstrating real-world software architecture patterns.

