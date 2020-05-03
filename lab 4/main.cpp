#include <iostream>

using namespace std;

#include "OOP/DT.h"
#include "stack.h"

void output(string name, stack dt);

int main() {
    DateTime dt (2020, 03, 20, 0, 0, 0);
    DateTime dt1(2020, 03, 21, 0, 0, 0);
    DateTime dt2(2020, 03, 22, 0, 0, 0);
    DateTime dt3(2020, 03, 23, 0, 0, 0);
    DateTime dt4(2020, 03, 24, 0, 0, 0);
    DateTime dt5(2020, 03, 25, 0, 0, 0);
    DateTime dt6(2020, 03, 26, 0, 0, 0);
    DateTime dt7(2020, 03, 27, 0, 0, 0);
    DateTime dt8(2020, 03, 28, 0, 0, 0);

#define ArraySIZE 9

    DateTime dtArray[ArraySIZE] = { dt, dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8 };

    stack dtStack(ArraySIZE);
    for (int i = 0; i < ArraySIZE; i++ ) {
        dtStack.push(dtArray[i]);
    }

    stack SundayStack;
    stack MondayStack;
    stack TuesdayStack(10);
    stack WednesdayStack(10);
    stack ThursdayStack(10);
    stack FridayStack(10);
    stack SaturdayStack(10);

    for (int i = 0; i < ArraySIZE; i++) {
        DateTime newDT = dtStack.pop();
        switch (newDT.getWeekDay()) {
            case Sunday:
                SundayStack.push(newDT);
                break;
            case Monday:
                MondayStack.push(newDT);
                break;
            case Tuesday:
                TuesdayStack.push(newDT);
                break;
            case Wednesday:
                WednesdayStack.push(newDT);
                break;
            case Thursday:
                ThursdayStack.push(newDT);
                break;
            case Friday:
                FridayStack.push(newDT);
                break;
            case Saturday:
                SaturdayStack.push(newDT);
                break;
        }
    }

    output("Sunday", SundayStack);
    output("Monday", MondayStack);
    output("Tuesday", TuesdayStack);
    output("Wednesday", WednesdayStack);
    output("Thursday", ThursdayStack);
    output("Friday", FridayStack);
    output("Saturday", SaturdayStack);

    return 0;
}

void output(string name, stack dt) {
    cout << name << " stack size: " << dt.size() << endl;
}