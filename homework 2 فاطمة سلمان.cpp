حل واجب كلاس الحيوانات 
#include <iostream>
#include <string>
using namespace std;

class Animals {
public:
    string color;
    int legs;

        
    void setData(string c, int l)
     {
        color = c;
        legs = l;
    }

      
    void showData() {
        cout << "Color: " << color << ", Legs: " << legs << endl;
    }
};

int main() {
    Animals cat;
    Animals lion;
    Animals elephen;

     
    cat.setData("black", 4);
    elephen.setData("grey", 4);
    lion.setData("yellow", 4);

      
    cout << "Cat info: ";
    cat.showData();

    cout << "Elephant info: ";
    elephen.showData();

    cout << "Lion info: ";
    lion.showData();

    return 0;
}