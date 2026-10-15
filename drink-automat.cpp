#include <iostream>
#include <string>
using namespace std;

int main() {
double x;
double y;
string drinks[5] = {"Boba Tea","Expresso","Fruit Soda","Lemonade","Herbal Tea"};
cout << "Welcome to our drink automat! Insert some coin here: ";
cin >> x;
if (x>=10) {
cout << "Perfect! Now select a number between 1-5 for your drink: ";
cin >> y;
cout << "Here is your drink: "<<  drinks[(int)y - 1]<< endl;
cout << "Enjoy!";
 }
else {
cout << "You haven't inserted enough money. You cannot purchase a drink :(";
}

return 0;
}
