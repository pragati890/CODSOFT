#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number=rand()%100+1;
    int guess=0;
    int tries=0;
    cout<<"number guessing game!" ;
    cout<<"i have chosen a number between 1 and 100.";
    while (guess!=number){
        cout<<"\nenter your guess:";
        cin>>guess;
        tries++;
        if (guess>number){
            cout<<"too high!try again.";
        }else if (guess<number){
            cout<<"too low! try again.";
        }else {
            cout<<"you guessed the correct number"<<number
            <<"in"<<tries<<"attempts!"<<endl;
        }
    }
    return 0;
}