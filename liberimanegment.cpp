#include <iostream>
using namespace std;

class admission_info {
    string name;
    int id;
    float ssc, hsc;

public:
    admission_info(string n, int i, float s, float h) : name(n), id(i), ssc(s), hsc(h) {}

    float getResult() {
        return ssc + hsc;
    }
};

class CSE : public admission_info {
public:
    CSE(string n, int i, float s, float h) : admission_info(n, i, s, h) {}

    void evaluate() {
        float result = getResult();
        if (result < 8.6) {
            cout << "You are not eligible" << endl;
        } else if (result <= 10 && result > 8.5) {
            cout << "You are eligible" << endl;
            if (result == 10) {
                cout << "You are getting 70% waiver" << endl;
            } else if (result >= 9) {
                cout << "You are getting 50% waiver" << endl;
            } else {
                cout << "I am sorry, you cannot get a waiver" << endl;
            }
        }
    }
};

class EEE : public admission_info {
public:
    EEE(string n, int i, float s, float h) : admission_info(n, i, s, h) {}

    void evaluate() {
        float result = getResult();
        if (result < 7.6) {
            cout << "You are not eligible" << endl;
        } else if (result <= 10 && result > 7.5) {
            cout << "You are eligible" << endl;
            if (result == 10) {
                cout << "You are getting 80% waiver" << endl;
            } else if (result >= 8) {
                cout << "You are getting 60% waiver" << endl;
            } else {
                cout << "I am sorry, you cannot get a waiver" << endl;
            }
        }
    }
};

class Bangla : public admission_info {
public:
    Bangla(string n, int i, float s, float h) : admission_info(n, i, s, h) {}

    void evaluate() {
        float result = getResult();
        if (result < 6.6) {
            cout << "You are not eligible" << endl;
        } else if (result <= 10 && result > 6.5) {
            cout << "You are eligible" << endl;
            if (result == 10) {
                cout << "You are getting 80% waiver" << endl;
            } else if (result >= 8) {
                cout << "You are getting 65% waiver" << endl;
            } else {
                cout << "I am sorry, you cannot get a waiver" << endl;
            }
        }
    }
};

int main() {
    cout << "Choose department:" << endl;
    cout << "1. CSE" << endl << "2. EEE" << endl << "3. BANGLA" << endl;
    int x;
    cin >> x;

    string name;
    int id;
    float ssc, hsc;

    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your id:" << endl;
    cin >> id;
    cout << "Enter your SSC result:" << endl;
    cin >> ssc;
    cout << "Enter your HSC result:" << endl;
    cin >> hsc;

    switch (x) {
        case 1: {
            CSE c(name, id, ssc, hsc);
            c.evaluate();
            break;
        }
        case 2: {
            EEE e(name, id, ssc, hsc);
            e.evaluate();
            break;
        }
        case 3: {
            Bangla b(name, id, ssc, hsc);
            b.evaluate();
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
