
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;
bool allSame(int, int);
bool checkDivisibility(int, int);

int main(){

    bool ans = allSame(2, 2);
    cout << ans << endl;
    bool ans2 = checkDivisibility(2, 4);
    cout << ans2 << endl;
    
    return 0;
}

bool allSame(int a, int b){
    if(((a % 2 == 0)&&(b % 2 == 0)) || ((a % 2 == 1)&&(b % 2 == 1))){
        return true;
    }
    else{
        return false;
    }
}

bool checkDivisibility(int a, int b){
    if((a % b == 0) || (b % a == 0)){
        return true;
    }
    else{
        return false;
    }
    
}
