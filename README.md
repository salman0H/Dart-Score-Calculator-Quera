# Dart Score Calculator

## Overview
This C++ program calculates the total score for dart throws based on their distance from the center of a dart board. The scoring mechanism involves calculating the Euclidean distance of each dart throw and assigning points accordingly.

## Features
- Calculates dart throw scores based on distance
- Supports multiple dart throws
- Uses a predefined scoring system
- Handles dynamic number of throws

## Prerequisites
- C++ Compiler (g++)
- Standard C++ Library

## Compilation
```bash
g++ -std=c++11 dart_score_calculator.cpp -o dart_score_calculator
```

## Usage
1. Run the compiled executable
2. Input the number of dart throws
3. For each throw, input x and y coordinates
4. Program outputs the total score

### Example
```
Enter number of throws: 3
Enter x1 y1: 5 3
Enter x2 y2: -2 4
Enter x3 y3: 1 1
Total Score: 27
```

## Code Structure
- `point` class: Represents a 2D point with x and y coordinates
- `distance()` function: Calculates Euclidean distance from the center
- Scoring array: Predefined scores based on distance ranges

## Potential Improvements
- Add input validation
- Implement more flexible scoring mechanism
- Handle edge cases more robustly


## Author
Salman Hashemi
