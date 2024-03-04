
// Calendar

#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
int leapYear(int year);
void printYearCalender(int year, int startingDay);



int main()
{
    int numOfDays = 0;
    int startingDay = 0;
    int year = 0;

    cout << "Please enter the year and starting day of week: " << endl;
    cin >> year >> startingDay;

    printYearCalender(year, startingDay);
}

int printMonthCalender(int numOfDays, int startingDay)
{
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun\n";
    int dayOfMonth = 1;
    int dayOfWeek = 1;
    for (int i = 0; i < startingDay - 1; i++)
    {
        cout << "\t";
    }
    for (int i = 0; i < 8 - startingDay; i++)
    {
        cout << dayOfMonth << "\t";
        dayOfMonth++;
    }
    cout << endl;
    for (int i = 8 - startingDay; i < numOfDays; i++)
    {
        if (dayOfMonth < numOfDays)
        {
            cout << dayOfMonth << "\t";
            dayOfMonth++;
            dayOfWeek++;

            if (dayOfWeek == 8)
            {
                cout << endl;
                dayOfWeek = 1;
            }
        }
        else
        {
            cout << dayOfMonth << "\n\n";
            return dayOfWeek;
        }
    	
    }
}

int leapYear(int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }
    else
    {
	    if (year % 4 == 0 && year % 100 != 0)
	    {
            return 1;
	    }
    }
    return 0;
}

void printYearCalender(int year, int startingDay)
{
    
    for (int i = 1; i <= 12; i++)
    {
        if (i == 1)
        {
            cout << "January " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 2)
        {
            cout << "February " << year << endl;
            int numOfDays = 28;
            if (leapYear(year) == 1)
            {
                numOfDays = 29;
            }

            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 3)
        {
            cout << "March " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 4)
        {
            cout << "April " << year << endl;
            int numOfDays = 30;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 5)
        {
            cout << "May " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 6)
        {
            cout << "June " << year << endl;
            int numOfDays = 30;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 7)
        {
            cout << "July " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 8)
        {
            cout << "August " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 9)
        {
            cout << "September " << year << endl;
            int numOfDays = 30;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 10)
        {
            cout << "October " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 11)
        {
            cout << "November " << year << endl;
            int numOfDays = 30;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
        else if (i == 12)
        {
            cout << "December " << year << endl;
            int numOfDays = 31;
            int lastDay = printMonthCalender(numOfDays, startingDay);
            if (lastDay < 7)
            {
                startingDay = lastDay + 1;
            }
            else if (lastDay == 7)
            {
                startingDay = 1;
            }
        }
    }

}