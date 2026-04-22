// Name: Abdul ghaffar
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0711
// Section: A
// assignment number : 01
// instructor: Sir Rizwan




 Write a single C++ statement to accomplish each of the following: 
 
i. Declare the variables voltage, current, and resistance to be of type double.

double voltage, current, resistance;  
// Create three decimal-number variables to store voltage, current, and resistance

ii. Display the message “Welcome to Object Oriented Programming in C++!” on the screen.

cout << "Welcome to Object Oriented Programming in C++!";  
// Show a welcome message on the screen for the user

iii. Read a value from the user and store it in an integer variable named age.

cin >> age;  
// Take age input from the keyboard and store it inside variable age

iv. If the variable temperature is greater than 100, print “Overheating detected!”.

if (temperature > 100) cout << "Overheating detected!";  
// Check temperature; if it crosses 100, warn about overheating

v. Compute the area of a circle with radius r and store it in area (π = 3.14159).

area = 3.14159 * r * r;  
// Calculate circle area using πr² and save the result in area

vi. Print the values of x, y, and z separated by a comma.

cout << x << "," << y << "," << z;  
// Print x, y, and z neatly separated by commas

vii. Assign the sum of voltage and current to total.

total = voltage + current;  
// Add voltage and current, then store the result in total

viii. Display “Error: Division by zero” only if denominator equals zero.

if (denominator == 0) cout << "Error: Division by zero";  
// Show error message only when denominator becomes zero

ix. Increment the variable count by 1 and then print its new value.

cout << ++count;  
// Increase count by 1 first, then print the updated value

x. Read three floating-point numbers from the keyboard into a, b, and c.

cin >> a >> b >> c;  
// Take three decimal numbers from user and store them in a, b, and c

xi. Total resistance in series (take values from user).

cin >> R1 >> R2 >> R3, cout << "Total Resistance (Series) = " << (R1 + R2 + R3);  
// Take three resistor values and add them because series resistances simply add

xii. Total resistance in parallel (take values from user).

cin >> R1 >> R2 >> R3, cout << "Total Resistance (Parallel) = " << 1 / ((1/R1) + (1/R2) + (1/R3));  
// Take three resistances and apply parallel resistance formula


xiii. Voltage across R2 using Voltage Division Rule.
(Chosen values: R1 = 10Ω, R2 = 20Ω, V = 12V)
cout << "Voltage across R2 = " << 12 * (20.0 / (10 + 20));  
// Use voltage division rule to calculate voltage across R2

xiv. Current through R2 using Current Division Rule.
(Chosen values: R1 = 10Ω, R2 = 20Ω, V = 12V)
cout << "Current through R2 = " << (12.0 / (10 + 20)) * (10.0 / (10 + 20));  
// Find total current then apply current division rule to get current through R2

xv. Calculate Semester GPA.

cin >> credit >> grade, totalCredits += credit, totalPoints += credit * grade;  
// Enter credit hours and grade points, then update totals

cout << "Semester GPA = " << (totalPoints / totalCredits);  
// Divide total grade points by total credit hours to calculate GPA


