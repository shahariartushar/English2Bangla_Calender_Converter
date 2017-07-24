#include<iostream>
#include<string>

using namespace std;

int main()
{
    int date,month,year;
    int temp;

    cin >> date >> month >> year;

    if(month<4)
    {
        year -= 594;
    }
    else
    {
        year -= 593;
    }

    if(month==4)
    {
        if(date<14)
        {
            month = 12;
            date += 17;
        }
        else
        {
            month = 1;
            date -= 13;
        }
    }
    else if(month==5 && month==6)
    {
        if(date<15)
        {
            temp = 4;
            date += 17;
        }
        else
        {
            temp = 3;
            date -= 14;
        }
        month -= temp;
    }
    else if(month==7 && month==8 && month==9)
    {
        if(date<16)
        {
            temp = 4;
            date += 16;
        }
        else
        {
            temp = 3;
            date -= 15;
        }
        month -= temp;
    }
    else if(month==10)
    {
        if(date<14)
        {
            month = 6;
            date += 15;
        }
        else
        {
            month = 7;
            date -= 15;
        }
    }
    else if(month==11 && month==12)
    {
        if(date<15)
        {
            temp = 4;
            date += 16;
        }
        else
        {
            temp = 3;
            date -= 14;
        }
        month -= temp;
    }
    else if(month==1)
    {
        if(date<14)
        {
            month = 9;
            date += 17;
        }
        else
        {
            month = 10;
            date -= 13;
        }
    }
    else if(month==2)
    {
        if(date<13)
        {
            month = 10;
            date += 18;
        }
        else
        {
            month = 11;
            date -= 12;
        }
    }
    else if(month==3)
    {
        if(date<14)
        {
            month = 11;
            date += 17;
        }
        else
        {
            month = 12;
            date -= 14;
        }
    }
    cout << date << "\t" << month << "\t" << year << "\n\n";

    return 0;
}
