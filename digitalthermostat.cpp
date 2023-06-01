#include <iostream>
#include <cstdlib>
#include <ctime>
//Class to stimulate "new" temperature reading everytime called otherwise if generated in themorstat function the random readinf is fixed everytime
class TEMPSensor {
public:
    float readTemperature() {
        return (std::rand() % 100) - 50; // It generates random temperature between -50°C to 50°C
    }
};
//Class  to initialize all required variables to display user and to display output
class thermostat {
    //imoprtant variables defined in private
private:
    float desired,current;
    bool heater,cooler;
    TEMPSensor tSensor;
public:
//variable declaration
    thermostat() {
        desired=0.0f;
        current=0.0f;
        heater=false;
        cooler=false;
    }
    //set option to set desired value
    void setDesiredValue(float temp) {
        desired = temp;
        std::cout << "Setting desired temperature to: " << desired << "°C" << std::endl;
    }
    //update option to update  consition of heater and cooler
    void updatetemp() {
        current = tSensor.readTemperature();
        if (current < desired) {
            heater = true;
            cooler = false;
        } else if (current > desired) {
            heater = false;
            cooler = true;
        } else {
            std::cout << "Stable" << std::endl;
        }
        display();
    }
    void display() {
        std::cout <<"=================================================================="<<std::endl;
        std::cout << "Desired Temperature: " << desired << "°C" << std::endl;
        std::cout <<"=================================================================="<<std::endl;
        std::cout << "Current Temperature: " << current << "°C" << std::endl;
        std::cout <<"=================================================================="<<std::endl;
        std::cout << "Heating System: " << (heater ? "ON" : "OFF") << std::endl;
        std::cout << "Cooling System: " << (cooler ? "ON" : "OFF") << std::endl;
        std::cout <<"=================================================================="<<std::endl;
    }
};
int main() {
    // random number generator
    srand(static_cast<unsigned>(std::time(nullptr))); 

    thermostat thermo;
    //continous loop until press 3 is pressed
    while (true) {
        int nu;
        std::cout<<std::endl;
        std::cout << "1: Set Temperature " << std::endl;
        std::cout << "2: Update Temperature" << std::endl;
        std::cout << "3: Exit " << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> nu;
        switch (nu) {
            case 1: {
                    float desiredTemp;
                    std::cout << "Enter desired temperature: ";
                    std::cin >> desiredTemp;
                    thermo.setDesiredValue(desiredTemp);
                    break;
                }
            case 2: {
                    thermo.updatetemp();
                    break;
                }
            case 3: {return 0;}//while loop breaking point
            default: std::cout << "Invalid" << std::endl;
        }
        
    }
    return 0;
}
