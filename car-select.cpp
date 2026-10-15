#include <iostream>
#include <string>
using namespace std;

int main() {

string cars[5] {"BMW","Volvo","Toyota","Lamborghini","Porsce"} ;
int x;
cout << "Pick a number between 1-5: ";
cin >> x;
cout << "Congrats! You got: "<< cars[x] << endl;
return 0;
}
