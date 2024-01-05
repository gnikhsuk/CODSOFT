#include<cstdlib>
#include<time.h>
#include<iostream>
using namespace std;
void guess(int n);
int main(){
    int n=100;
    guess(n);
    return 0;
}
void guess(int n){
    int randnumber,guessnum,numberofguesses;
    srand(time(0));
    randnumber=rand()%n;

    cout<<"Enter number that i have in my mind";

    numberofguesses=0;
   
   do{
    cin>>guessnum;
    if(numberofguesses>10){
        cout<<"Game Over!!";
    }
    if(guessnum==randnumber){
        cout<<"You Win in "<<numberofguesses <<" attempts!"<<endl;
        break;
    }
    if(guessnum>randnumber){
        cout<<"Try lower number!"<<endl;
        
    }
    if(guessnum<randnumber){
        cout<<"Try higher number"<<endl;
    }

    numberofguesses++;
   }while(1);
}