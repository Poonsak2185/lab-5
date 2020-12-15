#include<iostream>
using namespace std;
int num;
int i=1;
int even=-1;
int odd=0;
int main(){
    while(i!=0){
    cout << "Enter an integer: ";
    cin >> num;
    if(num%2==0){
    even++;
    }
    else
    {
        odd++;
    }
    i=num;
    }
    cout << "#Even numbers = "<<even;
    cout << "\n#Odd numbers = "<<odd;
    return 0;
}
