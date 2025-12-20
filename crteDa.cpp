#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // for rand, srand
#include <ctime>   // for time
#include <iomanip> // for setw, setfill
#include <sstream>

using namespace std;

// Generate random date between start and end (YYYY-MM-DD)
string randomDate(int startYear, int endYear)
{
    int year = startYear + rand() % (endYear - startYear + 1);
    int month = 1 + rand() % 12;
    int day;

    // Days per month (ignoring leap years for simplicity)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    day = 1 + rand() % daysInMonth[month - 1];

    stringstream ss;
    ss << year << "-";
    ss << setw(2) << setfill('0') << month << "-";
    ss << setw(2) << setfill('0') << day;
    return ss.str();
}

int main()
{
    srand((unsigned)time(0));

    vector<string> firstNames = {
        "Alice", "Bob", "Charlie", "David", "Eva",
        "Frank", "Grace", "Hannah", "Ian", "Jack",
        "Karen", "Liam", "Mona", "Nora", "Oliver",
        "Pia", "Quinn", "Rita", "Sam", "Tina"};

    vector<string> lastNames = {
        "Smith", "Johnson", "Williams", "Brown", "Jones",
        "Garcia", "Miller", "Davis", "Martinez", "Hernandez"};

    vector<string> countries = {
        "USA", "Canada", "UK", "Australia", "Germany",
        "France", "India", "Bangladesh", "Brazil", "Japan"};

    cout << "INSERT INTO users (name, email, country, signupdate, signoutdate) VALUES\n";

    for (int i = 1; i <= 1000; ++i)
    {
        string first = firstNames[rand() % firstNames.size()];
        string last = lastNames[rand() % lastNames.size()];
        string name = first + " " + last;
        string email = first + "." + last + to_string(i) + "@example.com";

        // lowercase email
        for (auto &c : email)
        {
            c = tolower(c);
        }

        string country = countries[rand() % countries.size()];
        string signupdate = randomDate(2021, 2024);

        // 50% chance signoutdate NULL, else a date after signupdate
        string signoutdate = "NULL";
        if (rand() % 2 == 0)
        {
            // Generate signoutdate >= signupdate
            // We'll convert signupdate to year, month, day
            int y = stoi(signupdate.substr(0, 4));
            int m = stoi(signupdate.substr(5, 2));
            int d = stoi(signupdate.substr(8, 2));

            // Random date from signupdate to end 2024-12-31
            int endYear = 2024;
            int endMonth = 12;
            int endDay = 31;

            // Simplify: pick a random day offset from signupdate to end of 2024
            // Convert signupdate to days offset from 2021-01-01 for simplicity
            int startDays = (y - 2021) * 365 + (m - 1) * 30 + d;
            int endDays = (endYear - 2021) * 365 + (endMonth - 1) * 30 + endDay;
            int randDays = startDays + (rand() % (endDays - startDays + 1));

            // Convert randDays back to year-month-day (approximate)
            int rYear = 2021 + randDays / 365;
            int rem = randDays % 365;
            int rMonth = 1 + rem / 30;
            int rDay = 1 + rem % 30;
            if (rMonth > 12)
            {
                rMonth = 12;
            }
            if (rDay > 28)
            {
                rDay = 28;
            } // to avoid invalid dates

            stringstream ss;
            ss << rYear << "-";
            ss << setw(2) << setfill('0') << rMonth << "-";
            ss << setw(2) << setfill('0') << rDay;

            signoutdate = "'" + ss.str() + "'";
        }

        cout << "('" << name << "', '" << email << "', '" << country << "', '" << signupdate << "', " << signoutdate << ")";
        if (i != 1000)
            cout << ",\n";
        else
            cout << ";\n";
    }

    return 0;
}
