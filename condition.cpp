#include<iostream>
#include<string>

using namespace std;

int main(){

  int age;
  cout << "คุณอายุเท่าไร : ";
  cin >> age;

  if(age >= 18 && age <= 60){
    cout << "คุณอายุมากกว่า 18 และอายุต่ำกว่า 60 ปี" << endl;
  }else if(age > 60){
    cout << "คุณอายุมากกว่า 60 ปี" << endl;
  }else{
    cout << "คุณอายุน้อยกว่า 18 " << endl;
  }

  return 0;
}


