# Shape Plotter

## Overview
Shape Plotter is a console-based C++ application that allows users to create various geometric shapes, such as points, lines, triangles, squares, rectangles, circles, and polygons. Based on user input, the program generates the coordinates of these shapes and stores them in a file called `shapes.dat`. The project employs object-oriented programming principles and demonstrates file handling for saving shape data.

## Features
- Create and store the following geometric shapes:
  - **Point**: A single 2D point.
  - **Line**: A line segment between two points.
  - **Triangle**: A polygon with three vertices.
  - **Square**: A shape with four equal sides, defined by its center and side length.
  - **Rectangle**: A shape with two pairs of equal, opposite sides, defined by two corners.
  - **Circle**: Defined by a center point and a radius.
  - **Polygon**: A multi-sided shape defined by its vertices.
  
- User-friendly, menu-driven interface for easy interaction.
- Coordinates of all shapes are saved to the `shapes.dat` file for later reference or plotting.

## Project Structure

### Classes
- **Point**: Represents a 2D point using `x` and `y` coordinates.
- **Line**: A line segment defined by two points.
- **Circle**: A circle with a specified center and radius.
- **Triangle**: A three-sided polygon created from three points.
- **Square**: A square with a specified center point and equal side lengths.
- **Rectangle**: A rectangle defined by two corner points.
- **Polygon**: A polygon constructed from multiple vertices provided by the user.

### Files
- **main.cpp**: The primary file containing the main function and menu logic.
- **Point.h / Point.cpp**: Defines the `Point` class.
- **Line.h / Line.cpp**: Defines the `Line` class.
- **Circle.h / Circle.cpp**: Defines the `Circle` class.
- **Triangle.h / Triangle.cpp**: Defines the `Triangle` class.
- **Square.h / Square.cpp**: Defines the `Square` class.
- **Rectangle.h / Rectangle.cpp**: Defines the `Rectangle` class.
- **Polygon.h / Polygon.cpp**: Defines the `Polygon` class.

## How to Run the Application

### 1. Compile the Project
- Compile the project using your preferred C++ compiler or IDE (e.g., g++, Visual Studio, etc.).
  
  Example (using g++):
  ```bash
  g++ main.cpp Point.cpp Line.cpp Circle.cpp Triangle.cpp Square.cpp Rectangle.cpp Polygon.cpp -o ShapePlotter
  ```

### 2. Run the Program
- Execute the compiled program. The console will display a menu with options to create different shapes.
  
  Example (Linux/Windows command line):
  ```bash
  ./ShapePlotter
  ```

### 3. Use the Menu
- Select the corresponding option to create a shape (e.g., point, line, triangle).
- After entering the required input, the coordinates will be saved to `shapes.dat`.

### 4. View the Output
- Open the `shapes.dat` file using any text editor to see the saved coordinates for the shapes you created.

## Example Menu Commands

1. **Create a Point:**
   - Choose `1` from the menu.
   - Enter the coordinates `(x, y)`.

2. **Create a Line:**
   - Choose `2` from the menu.
   - Input two points `(x1, y1)` and `(x2, y2)`.

3. **Create a Triangle:**
   - Choose `3` from the menu.
   - Enter the three vertices `(x1, y1), (x2, y2), (x3, y3)`.

4. **Create a Circle:**
   - Choose `6` from the menu.
   - Input the center point and the radius.

5. **Create a Polygon:**
   - Choose `7` from the menu.
   - Specify the number of vertices and input their coordinates.
