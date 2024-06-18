#include <iostream>
using namespace std;

class Vegetables {
    private:
        string name;
        string color;
        string category;

    public:
        Vegetables(string n, string col, string cat) {
            name = n;
            color = col;
            category = cat;
        }

        void output() {
            cout << "Name: " << name << endl;
            cout << "Color: " << color << endl;
            cout << "Category: " << category << endl;
        }
};

int main(){
    Vegetables vegetable("Carrot", "Orange", "Root");
    vegetable.output();
}