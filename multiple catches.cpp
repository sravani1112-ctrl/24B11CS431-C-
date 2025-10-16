#include <iostream>
using namespace std;

void num(int y) {   
    try {
        if (y == 0) {
            throw 5;        
        }
        else if (y == 1) {
            throw 's';      
        }
        else if (y < 0) {
            throw 5.4;      
        }
        else {
            cout << "No exception!" << endl;
        }
    }
    catch (int i) {
        cout<<"integer"<<endl;
    }
    catch (char x) {
        cout<<"character"<<endl;
    }
    catch (double d) {
        cout<<"double"<<endl;
    }
}

int main() {
    int n;
   
    cin >> n;

    num(n);  
    cout<<"Program ended"<<endl;
    return 0;
}
