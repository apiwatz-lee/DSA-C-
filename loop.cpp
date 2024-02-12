#include<iostream>
using namespace std;

int main(){

  int count = 0;

  while(count < 10){
    cout << "While Count = " << count << endl;
    count++;
  }

  for(int i =0 ; i < 10 ; i++){
    cout << "For Count = " << i << endl;
  }


  return 0;
}