# Digital Thermostat Implementation

## Task Description
Designing and implementing of a digital thermostat system as an project for embedded software engineering intern selection. By simulating temperature readings, providing user interaction, implementing control logic in program, and displaying  output, the objective is to demonstrate knowledge and skills in embedded systems development. 

## Requirements
- Programming Language: C/C++
- Temperature Simulation: Use of random numbers to simulate temperature readings.
- User Interaction: Implement a user interface that allows users to set the preferred temperature and output the current temperature readings.
- Control Logic: Development of a control algorithm to switch in between a virtual heating and cooling system based on temperature readings and desired temperature.
- Feedback and Display: Provide feedback by displaying the [current temperature, desired temperature, and heating/cooling system state]
- Code Organization: Use proper software design principles and modular code organization for readability, maintainability, and extensibility.

## Implementation
The Digital Thermostat Implementation includes the following components:

1. `TEMPSensor` class: Simulates temperature readings by generating random values everytime called.

2. `thermostat` class: For Management of the thermostat system, desired temperature, current temperature, and heating/cooling system status and provide functions like
   - `setDesiredValue`: To Set the desired temperature provided by the user.
   - `updateTemp`: Updates the current temperature reading to user and adjusts the heating/cooling system accordingly.
   - `display`: Displays the desired temperature, current temperature, and heating/cooling system status.

3. `main` function: Performs user interface and interaction implementation. The user can update the system to see the current temperature and the status of the system while also setting the desired temperature. .

## Usage
1. Compile the program using a C/C++ compiler.
2. Run the compiled executable file.
3. Follow the on-screen prompts to interact with the digital thermostat system:
   - Enter `1` To set the desired temperature.
   - Enter `2` To update the current temperature and view heating/cooling System status.
   - Enter `3` To exit the program.

## Example Usage
- $ g++ digitalthermostat.cpp -o digitalthermostat
$ ./digitalthermostat

1: Set
2: Update
3: Exit
Enter: 1
Enter desired temperature: 25
Setting desired temperature to: 25°C

1: Set
2: Update
3: Exit
Enter: 2
Desired Temperature: 25°C
Current Temperature: -10°C
Heating System: OFF
Cooling System: ON

1: Set
2: Update
3: Exit
Enter: 2
Desired Temperature: 25°C
Current Temperature: -10°C
Heating System: OFF
Cooling System: ON

1: Set
2: Update
3: Exit
Enter: 3
## Contributing
Contributions to enhance the functionality, organize the code, or add new features to the implementation of the digital thermostat. Please adhere to the normal contributing procedures.
