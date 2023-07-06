#include <iostream>
#include "Formula1.h"
#include "Formula2.h"
#include "Formula3.h"
#include "Formula4.h"
#include "Formula5.h"

int main() {
    double value1, value2, value3, result;
    int formulaChoice;

    std::cout << "Enter value 1: ";
    std::cin >> value1;
    std::cout << "Enter value 2: ";
    std::cin >> value2;
    std::cout << "Enter value 3: ";
    std::cin >> value3;

    std::cout << "Choose a formula to calculate:" << std::endl;
    std::cout << "1. Velocity" << std::endl;
    std::cout << "2. Acceleration" << std::endl;
    std::cout << "3. Distance" << std::endl;
    std::cout << "4. Force" << std::endl;
    std::cout << "5. Energy" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> formulaChoice;

    switch (formulaChoice) {
        case 1:
            result = calculateVelocity(value1, value2);
            std::cout << "Result for Velocity written by:\nName:ONYAM, PETER OYIRA\nMatric: 19/097344128\nDepart.: ECT\nRESULT: " << result << "m/s" << std::endl;
            break;
        case 2:
            result = calculateAcceleration(value1, value2, value3);
            std::cout << "Result for Acceleration written by:\nName: UKAH GAIUS RAYMOND\nMatric: 19/097344153\nDepart.: ECT\nRESULT: " << result << "m/s^2" << std::endl;

            break;
        case 3:
            result = calculateDistance(value1, value2, value3);
            std::cout << "Result for Distance written by:\nName: OGRI EMMANUEL ADANU\nMatric: 19/097344115\nDepart.: ECT\nRESULT: " << result << "m" << std::endl;
            break;
        case 4:
            result = calculateForce(value1, value2);
            std::cout << "Result for Force written by:\nName: INIKO EMMANUELLA EKENG\nMatric: 19/097344078\nDepart.: ECT\nRESULT: " << result<< "N" << std::endl;
            break;
        case 5:
            result = calculateEnergy(value1, value2);
            std::cout << "Result for Energy written by:\nName: UKAM SAVIOUR AJAH\nMatric: 19/097344154\nDepart.: ECT\nRESULT: " << result << "J" << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}

