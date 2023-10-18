#include <iostream>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert the current time to a local time struct
    std::tm* localTime = std::localtime(&currentTime);

    // Extract the date components
    int year = localTime->tm_year + 1900;  // Years since 1900
    int month = localTime->tm_mon + 1;     // Months since January (0-11)
    int day = localTime->tm_mday;          // Day of the month (1-31)

    // Print the date
    std::cout << "Today's date is: " << year << "-" << month << "-" << day << std::endl;

    return 0;
}

