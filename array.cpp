#include<iostream> 
using namespace std; 


int main(){
  int ages[2]; //ประกาศตัวแปร age ที่มีขนาด 2 ด้วย int
  int sumAge;

  cout<<"กรุณาพิมพ์อายุคนที่ 1 เข้ามา: "; 
  cin >> ages[0]; 
  cout << "กรุพิมพ์อายุคนที่ 2 เข้ามา: ";
  cin >> ages[1];
  sumAge = ages[0] + ages[1];
  cout << "อายุ 2 คนรวมกัน = " << sumAge;
  
  return 0; 
}



