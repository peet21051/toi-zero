#include <iostream>
using namespace std;

int main(){
    char x1, x2;        
    string z1, z2;        
    cin >> x1 >> z1;      
    cin >> x2 >> z2;     
    
    int prize = 0;

    if (x1 == x2) {
        if (z1 == z2 ) {
            prize = +1000000;
            cout << prize << endl;
            return 0;
        } else if (z1.substr(3) == z2.substr(3) ) {
            prize = +1000;
        } else if (z1.substr(2) == z2.substr(2) ) {
            prize = +2000;
        } else if(z1 != z2){
            prize = +20;
        }
    } else if (x1 != x2) {
        if (z1 == z2 ) {
            prize = +100000;
            cout << prize << endl;
            return 0;
        } else if (z1.substr(3) == z2.substr(3) ) {
            prize = +100;
        } else if (z1.substr(2) == z2.substr(2) ) {
            prize = +200;
        } else {
            prize = +0;
        }
    }

    cout << prize << endl;
    return 0;
}