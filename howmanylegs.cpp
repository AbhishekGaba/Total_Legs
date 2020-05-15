#include <iostream>
using namespace std;

int total_legs( int num1, int num2, int num3) {

    int chickenlegs = num1*2;
    int piglegs = num2*4;
    int cowlegs = num3*4;

    int result = chickenlegs + piglegs + cowlegs;
    return result;


}

int main(){

    int a;
    int b;
    int c;

    cout << "Hi, welcome to the leg counter! Let's find out how many legs there are in your farm" << endl;
    cout << "How many chickens do you have at your farm? ";
    cin >> a;
    cout << "How many pigs do you have? ";
    cin >> b;
    cout << "How many cows do you have? ";
    cin >> c;
    cout << "The total number of legs on your farm are " << total_legs(a,b,c) << endl;
    cout << "Don't forget to count your own! " << endl;


}
