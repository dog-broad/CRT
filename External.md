# Prime numbers from 1 to n



```java

import java.util.Scanner;



public class PrimeNumbers {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        // Prompt the user to enter a number

        System.out.print("Enter a number: ");

        int n = sc.nextInt();



        // Display the header for the prime numbers output

        System.out.println("Prime numbers between 1 and " + n + " are: ");



        // Loop through each number from 2 to the entered number (inclusive)

        for (int i = 2; i <= n; i++) {

            boolean isPrime = true; // Assume the current number is prime initially



            // Loop to check if the number is prime by checking divisibility with numbers from 2 to i/2

            // We can stop at i/2 because factors beyond i/2 would already be checked in previous iterations.

            for (int j = 2; j <= i / 2; j++) {

                if (i % j == 0) {

                    // If i is divisible by j, it is not a prime number.

                    isPrime = false;

                    break; // No need to continue checking further for this number.

                }

            }



            // If isPrime is still true, then the current number i is a prime number.

            if (isPrime)

                System.out.print(i + " ");

        }

    }

}

```



The program allows the user to input a number (n) and then prints all prime numbers between 1 and the entered number (inclusive).



1. It starts by creating a `Scanner` object to read user input from the console.



2. The user is prompted to enter a number, which is stored in the variable `n`.



3. The program then displays a header to indicate that the following numbers are prime numbers.



4. The outer `for` loop iterates from 2 to `n` (inclusive) to check each number if it's prime.



5. For each number `i` within the loop, it is assumed to be prime initially, so `isPrime` is set to `true`.



6. The inner `for` loop iterates from 2 to `i/2` (inclusive). It checks if `i` is divisible by any number between 2 and `i/2`. If `i` is divisible by any number, it means `i` is not a prime number, and `isPrime` is set to `false`, and the loop breaks early.



7. After the inner loop, if `isPrime` remains `true`, then the current number `i` is a prime number, and it is printed to the console.



8. The program continues the process for each number from 2 to `n`, printing only prime numbers in the specified range.





# Abstract Usage



```java

// An abstract class representing a shape

abstract class Shape {

    int width;    // Common property: width

    int height;   // Common property: height

    int radius;   // Common property: radius



    // Abstract method to calculate and print the area of the shape

    abstract void printArea();

}



// A concrete subclass representing a rectangle

class Rectangle extends Shape {

    // Implementation of the abstract method to calculate the area of the rectangle

    void printArea() {

        System.out.println("Area of rectangle: " + width * height);

    }

}



// A concrete subclass representing a triangle

class Triangle extends Shape {

    // Implementation of the abstract method to calculate the area of the triangle

    void printArea() {

        System.out.println("Area of triangle: " + 0.5 * width * height);

    }

}



// A concrete subclass representing a circle

class Circle extends Shape {

    // Implementation of the abstract method to calculate the area of the circle

    void printArea() {

        System.out.println("Area of circle: " + 3.14 * radius * radius);

    }

}



// Main class to demonstrate the usage of the abstract class and its subclasses

public class AbstractUsage {

    public static void main(String[] args) {

        // Create instances of the concrete subclasses

        Rectangle r = new Rectangle();

        Triangle t = new Triangle();

        Circle c = new Circle();



        // Set properties for each shape

        r.width = 10;

        r.height = 20;

        t.width = 10;

        t.height = 20;

        c.radius = 10;



        // Call the printArea method for each shape, which will print the respective area

        r.printArea();

        t.printArea();

        c.printArea();

    }

}

```



In this code, we have an abstract class `Shape`, which defines common properties (`width`, `height`, `radius`) and declares an abstract method `printArea()`. The `printArea()` method is abstract because each subclass will implement it differently based on the shape's type.



Next, we have three concrete subclasses `Rectangle`, `Triangle`, and `Circle`, each extending the `Shape` class. These subclasses provide the implementation for the `printArea()` method, specific to each shape's formula to calculate the area.



In the `AbstractUsage` class (the main class), we create instances of the concrete subclasses (`Rectangle`, `Triangle`, `Circle`) and set their properties (width, height, radius). Then, we call the `printArea()` method for each instance, which will print the area of the respective shape based on its specific implementation. This demonstrates the usage of the abstract class and its subclasses for calculating and printing the areas of different shapes.





# Traffic light



This Java applet creates a simple traffic light simulation that allows the user to select a color (Red, Yellow, or Green) and displays the corresponding color of the traffic light along with a message indicating the current state of the traffic light.



Here's a breakdown of the code with comments to explain the concepts:



```java

import java.awt.*;

import java.awt.event.*;

import java.applet.*;



public class TrafficLight extends Applet implements ItemListener {

    int colourNum; // Variable to store the selected color of the traffic light

    CheckboxGroup cbg; // CheckboxGroup to group the checkboxes together

    Checkbox red, yellow, green; // Checkboxes representing the colors



    String msg = ""; // Variable to store the message indicating the current state



    public void init() {

        cbg = new CheckboxGroup(); // Create the CheckboxGroup

        red = new Checkbox("Red", cbg, false); // Create the Red checkbox and add it to the group

        yellow = new Checkbox("Yellow", cbg, false); // Create the Yellow checkbox and add it to the group

        green = new Checkbox("Green", cbg, false); // Create the Green checkbox and add it to the group



        add(red); // Add the Red checkbox to the applet

        add(yellow); // Add the Yellow checkbox to the applet

        add(green); // Add the Green checkbox to the applet



        red.addItemListener(this); // Add an ItemListener to the Red checkbox to listen for changes

        yellow.addItemListener(this); // Add an ItemListener to the Yellow checkbox to listen for changes

        green.addItemListener(this); // Add an ItemListener to the Green checkbox to listen for changes

    }



    // This method is called when a checkbox state changes (i.e., selected/unselected)

    public void itemStateChanged(ItemEvent ie) {

        // Determine which color is selected based on the checkbox state

        if (red.getState())

            colourNum = 1; // Red selected

        else if (yellow.getState())

            colourNum = 2; // Yellow selected

        else if (green.getState())

            colourNum = 3; // Green selected



        repaint(); // Trigger the repaint() method to update the graphics with the new selected color

    }



    public void paint(Graphics g) {

        g.setColor(Color.black);

        g.fillOval(150, 70, 50, 50); // Draw the black outer circle for the Red light

        g.fillOval(150, 150, 50, 50); // Draw the black outer circle for the Yellow light

        g.fillOval(150, 230, 50, 50); // Draw the black outer circle for the Green light



        // Use a switch statement to determine which color to display based on colourNum

        switch (colourNum) {

            case 1:

                g.setColor(Color.red);

                g.fillOval(150, 70, 50, 50); // Fill the inner circle with Red color for the Red light

                msg = "Stop";

                g.drawString(msg, 210, 100); // Display the message "Stop"

                break;

            case 2:

                g.setColor(Color.yellow);

                g.fillOval(150, 150, 50, 50); // Fill the inner circle with Yellow color for the Yellow light

                msg = "Ready";

                g.drawString(msg, 210, 180); // Display the message "Ready"

                break;

            case 3:

                g.setColor(Color.green);

                g.fillOval(150, 230, 50, 50); // Fill the inner circle with Green color for the Green light

                msg = "Go";

                g.drawString(msg, 210, 260); // Display the message "Go"

                break;

        }

    }

}

```



The code creates an applet that allows the user to select one of the three colors (Red, Yellow, or Green) using checkboxes. Based on the selected color, the applet will display the corresponding color on the traffic light and show a message indicating the current state (Stop, Ready, or Go). The `itemStateChanged()` method is used to detect changes in checkbox selection, and `repaint()` is called to update the graphics whenever a checkbox is selected/unselected. The `paint()` method is responsible for drawing the traffic light and displaying the appropriate color and message based on the selected color.





# Student Viewer



Sure! Let me explain the code with comments:



```java

// Define a class named Student to represent student information

class Student {

    int HallTicketNo; // Member variable to store Hall Ticket Number

    String Name; // Member variable to store Student Name

    String Department; // Member variable to store Student Department



    // Constructor to initialize Student object with provided Hall Ticket Number, Name, and Department

    Student(int HallTicketNo, String Name, String Department) {

        this.HallTicketNo = HallTicketNo;

        this.Name = Name;

        this.Department = Department;

    }

}



// Main class named StudentViewer to interact with users and display student information

public class StudentViewer {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n; // Variable to store the number of students

        Student[] s; // Array of Student objects to store student data



        System.out.print("Enter the number of students: ");

        n = sc.nextInt(); // Read the number of students from the user

        s = new Student[n]; // Initialize the array to hold n Student objects



        // Loop to read student information for n students

        for (int i = 0; i < n; i++) {

            System.out.print("Enter the Hall Ticket Number, Name, and Department of Student " + (i + 1) + ": ");

            // Read Hall Ticket Number, Name, and Department from the user and create a new Student object

            s[i] = new Student(sc.nextInt(), sc.next(), sc.next());

        }



        // Display the header for the student information table

        System.out.println("Hall Ticket Number\tName\tDepartment");



        // Loop to display student information for all the students

        for (int i = 0; i < n; i++) {

            // Print the Hall Ticket Number, Name, and Department of the current student

            System.out.println(s[i].HallTicketNo + "\t" + s[i].Name + "\t" + s[i].Department);

        }

    }

}

```



The code provides a simple Java program to create an array of `Student` objects and collect and display student information. Here's how it works:



1. A `Student` class is defined to represent student information. It has three member variables: `HallTicketNo`, `Name`, and `Department`. The class has a constructor that allows you to create a `Student` object by providing values for these member variables.



2. The `StudentViewer` class is the main class where the program interacts with the user and displays student information.



3. The `Scanner` class is used to read input from the user. The program first prompts the user to enter the number of students (`n`) they want to input.



4. An array `s` of `Student` objects is initialized with a size of `n`, based on the user input.



5. A loop is used to read student information for each student. For each student, the program prompts the user to enter the Hall Ticket Number, Name, and Department. A new `Student` object is created using this information and stored in the array `s`.



6. After collecting all student information, the program displays a header for the student information table.



7. Another loop is used to print the Hall Ticket Number, Name, and Department of each student from the `s` array, displaying the student information in a tabular format.







# User Defined Exception class



```java

// Define a custom Exception class named InvalidAgeException that extends the built-in Exception class

class InvalidAgeException extends Exception {

    // Constructor to initialize the InvalidAgeException with a custom error message

    InvalidAgeException(String s) {

        // Call the constructor of the base class (Exception class) with the custom error message

        super(s);

    }

}



// Main class named UserDefinedException to demonstrate the usage of custom Exception

public class UserDefinedException {

    // Static method named validate that checks if a person's age is valid for voting

    static void validate(int age) throws InvalidAgeException {

        if (age < 18)

            // If age is less than 18, throw a new instance of InvalidAgeException with a custom error message

            throw new InvalidAgeException("Not eligible to vote");

        else

            System.out.println("Eligible to vote");

    }



    public static void main(String[] args) {

        try {

            // Call the validate method with an age of 13

            validate(13);

        } catch (Exception e) {

            // Catch the InvalidAgeException if thrown and print the error message

            System.out.println("Exception occurred: " + e);

        }

        System.out.println("Rest of the code");

    }

}

```



Explanation:



1. `InvalidAgeException` class: It is a custom exception class that extends the built-in `Exception` class. It allows you to define a custom exception to handle specific error situations. In this case, it's designed to handle the scenario where the age is not valid for voting.



2. Constructor of `InvalidAgeException`: The class has a constructor that takes a `String` argument `s`, which is a custom error message. In the constructor, `super(s)` is called. The `super` keyword is used to call the constructor of the base class (i.e., `Exception` class) with the custom error message `s`. This helps in initializing the exception with the provided error message.



3. `validate` method: It is a static method that takes an integer `age` as an argument. The method checks whether the `age` is less than 18. If the condition is true (age is less than 18), it throws a new instance of the `InvalidAgeException` with the message "Not eligible to vote." If the condition is false (age is greater than or equal to 18), it prints "Eligible to vote."



4. `main` method: In the `main` method, the `validate` method is called with an age of 13 inside a try-catch block. As the age is less than 18, the `validate` method throws an instance of `InvalidAgeException`, and the catch block catches the exception and prints "Exception occurred: ..." along with the error message.



5. The program continues to execute the "Rest of the code" statement after the try-catch block, demonstrating that the program can recover from the exception and continue executing other parts of the code.





# Factorial Applet



```java

import java.awt.*;

import java.awt.event.*;

import java.applet.*;



// Define a class named Factorial that extends Applet and implements ActionListener

public class Factorial extends Applet implements ActionListener {

    // Declare variables to hold GUI components

    Button b1, b2; // Buttons for calculate and clear

    TextField t1, t2; // TextFields to input and display the result

    Label l1, l2; // Labels to indicate the purpose of the input and output fields



    // The init() method is called when the applet is initialized

    public void init() {

        // Create GUI components

        b1 = new Button("Calculate");

        b2 = new Button("Clear");

        t1 = new TextField(10); // TextField with 10 columns for input

        t2 = new TextField(10); // TextField with 10 columns for output

        l1 = new Label("Enter a number"); // Label to prompt for number input

        l2 = new Label("Factorial"); // Label to indicate the output purpose



        // Add the components to the applet

        add(l1);

        add(t1);

        add(l2);

        add(t2);

        add(b1);

        add(b2);



        // Add ActionListeners to the buttons to listen for button clicks

        b1.addActionListener(this);

        b2.addActionListener(this);

    }



    // The actionPerformed() method is called when a button is clicked

    public void actionPerformed(ActionEvent ae) {

        if (ae.getSource() == b1) { // If the "Calculate" button is clicked

            int n = Integer.parseInt(t1.getText()); // Parse the integer value from the input TextField

            int fact = 1; // Initialize the factorial to 1

            for (int i = 1; i <= n; i++) // Loop to calculate the factorial of the input number

                fact *= i; // Calculate the factorial by multiplying with each number from 1 to n

            t2.setText(String.valueOf(fact)); // Display the result in the output TextField

        } else if (ae.getSource() == b2) { // If the "Clear" button is clicked

            t1.setText(""); // Clear the input TextField

            t2.setText(""); // Clear the output TextField

        }

    }

}

```



Explanation:



1. The `Factorial` class is an applet that extends the `Applet` class and implements the `ActionListener` interface to handle button clicks.



2. The class declares several member variables (`b1`, `b2`, `t1`, `t2`, `l1`, and `l2`) to hold GUI components such as buttons, text fields, and labels.



3. The `init()` method is called when the applet is initialized. It creates and initializes the GUI components and adds them to the applet.



4. Two buttons are created, "Calculate" and "Clear," to trigger the factorial calculation and clearing of input/output fields, respectively.



5. Two text fields (`t1` and `t2`) are created for user input and displaying the factorial result.



6. Two labels (`l1` and `l2`) are created to provide instructions for the input and indicate the purpose of the output.



7. The `actionPerformed()` method is called when a button is clicked. It checks which button is clicked using the `getSource()` method of the `ActionEvent` object.



8. If the "Calculate" button (`b1`) is clicked, the method reads the integer value from the input text field (`t1`). It then calculates the factorial of the entered number using a loop and displays the result in the output text field (`t2`).



9. If the "Clear" button (`b2`) is clicked, the method clears the input and output text fields by setting their text to an empty string.
