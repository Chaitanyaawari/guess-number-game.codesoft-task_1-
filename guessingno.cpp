#include<iostream>
#include<ctime>
int main(){

    std::cout<<"enter the guess limit: ";
    int lim; 
    std::cin>>lim;
    srand ( time(0) ^ clock () );
    const int num =rand() % lim;
    while(true){
          std::cout<<"enter the guess no: ";
          int guess;
          std::cin>>guess;

          if( guess < num )
          {
          std::cout<<"your guess no is toooo small please retry\n";
          continue;
          }

          else if( guess > num )
          {
          std::cout<<"your guess no is toooo large please retry\n";
          continue;
          }

          
          else  
          {
          std::cout<<"your guess perfect no!!";
          break;
          }
    }
}