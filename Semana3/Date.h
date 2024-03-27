#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
    int mounth, day, year;

    public:
    explicit Date(int m, int d, int y)
    : mounth{m}, day{d}, year{y}{

        if(m < 1 || m > 12){
            m = 1;
        }
    }

    void setMes(int m){
        m = mounth;
    }
    void setDia(int d){
        d = day;
    }
    void setAño(int y){
        y = year;
    }

    int getMes() const{
        return mounth;
    }
    int getDia() const{
        return day;
    }
    int getAño() const {
        return year;
    }

    void displayDate() const{
        cout << day << " / " << mounth << " / " << year << endl;
    }
};