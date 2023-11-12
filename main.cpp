#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user = "Mico";
    string pass = "Pogi";
    string user1;
    string pass1;
    int attempts;
    do{
    cout << "Enter user:";
    cin >> user1;
    cout << "Enter pass:";
    cin >> pass1;
    if(user1 == user){
        if(pass1 == pass){
            cout << "Access Granted";
            return 0;
        }
        }
    else{
        attempts = attempts + 1;
    }
    }
    while(attempts < 3);
    cout << "Too many attempts! The program will now exit";
    return 0;
}
