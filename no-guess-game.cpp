#include<iostream>
#include<ctime>
using namespace std;
int main(){
    cout<<"Enter Guess Limit : ";
   int lim;
   cin>>lim;
   const int num=rand()%lim;
   while(true){
    cout<<"Enter Your Guess : ";
    int guess;
    cin>>guess;
    if(guess<num){
        cout<<"Your guess is too small, please retry\n";
    }
    else if(guess>num){
      cout<<"Your guess is too large, please retry\n";
    }
    else{
        cout<<"You have guessed correctly!\n";
        break;
    }
   }
   return 0;
}