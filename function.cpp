#include<iostream>
#include<string>
using namespace std;

void greet(){ //function แบบไม่คืนค่า
  cout << "Hello Toon";
}

string greetString(){ //function คืนค่า string
  return "Hello Toon";
}

int areaOfCircle(float radius){
  return 3.1415 * radius * radius;
}

int main(){
  int radius;
  for(int i = 0 ; i < 5 ; i++){
    cout << "ใส่รัศมี: ";
    cin >> radius;
    int areaCircle = areaOfCircle(radius);
    cout << "พื้นที่วงกลม:" << areaCircle << endl;
  }
  string helloName = greetString();
  cout << helloName << endl;


  return 0;
}