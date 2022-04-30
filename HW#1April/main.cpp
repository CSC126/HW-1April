
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;
bool allSame(int, int);
bool checkDivisibility(int, int);
int sumRange(int, int);
int sumOfOddCubes(int, int);
float calcFormula(int);

int main(){

    bool ans = allSame(2, 2);
    cout << ans << endl;
    bool ans2 = checkDivisibility(2, 4);
    cout << ans2 << endl;
    int ans3 = sumRange(6, 12);
    cout << ans3 << endl;
    int ans4 = sumOfOddCubes(7, 15);
    cout << ans4 << endl;
    float ans5 = calcFormula(4);
    cout << ans5 << endl;
    
    
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

int sumRange(int a , int b){
    int smaller, bigger,tempSum = 0, difference;
    if(a < b){
        smaller = a;
        bigger = b;
        difference = b - a;
    }
    else{
        smaller = b;
        bigger = a;
        difference = a - b;
    }
    for(int i = 0; i <= difference; i++){
        tempSum = (smaller + i) + tempSum;
    }
    return tempSum;
}

int sumOfOddCubes(int a, int b){
    int smaller, bigger,tempSum = 0, difference;
    if(a < b){
        smaller = a;
        bigger = b;
        difference = b - a;
    }
    
    else{
        smaller = b;
        bigger = a;
        difference = a - b;
    }
    
        for(int i = 0; i <= difference; i++){
            if(smaller % 2 == 1){
                tempSum = pow((smaller),3) + tempSum;
                smaller++;
            }
                else{
                    smaller++;
                }
        }
    return tempSum;
}

float calcFormula(int a){
    float tempSum = 0;
    for(int i = 1; i <= a;i++){
        tempSum = (1/pow(2,i)) + tempSum;
    }
    return tempSum;
}
