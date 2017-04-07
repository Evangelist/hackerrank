#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// start
class Person
{
public:
    virtual void getdata(void) = 0;
    virtual void putdata(void) = 0;
protected:
    string name;
    int age;
};

class Professor : public Person
{
private:
    static int id;
    int publications;
    int cur_id;
public:
    virtual void getdata(void)
    {
        cin >> name >> age >> publications;
        cur_id = ++id;
    }
    virtual void putdata(void)
    {
        cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
    }
};

class Student : public Person
{
private:
    static int id;
    int marks[6];
    int cur_id;
    int sum;
public:
    virtual void getdata(void)
    {
        cin >> name >> age;
        sum = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            sum += marks[i];
        }
    }
    virtual void putdata(void)
    {
        cout << name << ' ' << age << ' ' << sum << ' ' << cur_id << endl;
    }
};

int Professor::id = 0;
int Student::id = 0;
// end

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
