#include<iostream>
#include<string>

using namespace std;

int main(){
  string name;
  cout << "คุณชื่ออะไร :";
  cin >> name;
  cout << "คุณชื่อ :" << name << endl;

  char firstCharacter = name[0];
  cout << "ตัวอักษรตัวแรกบนชื่อคุณคือ :" << firstCharacter << endl;
  return 0;
}