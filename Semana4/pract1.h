#include <iostream>
using namespace std;
#include <string>

class Student{
    public:
    explicit Student(string n, int a)
        : name{n}, age{a}{

    }

    void setNombre(string n){
        n = name;
    }
    void setEdad(int a){
        a = age;
    }

    string getNombre(){
        return name;
    }
    int getEdad(){
        return age;
    }
    
    bool isOlder() const{
        if(age >= 18){
            return true;
        }else {
            return false;
        }
    }

    private:
        string name;
        int age; 
};