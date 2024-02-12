#include <iostream>
using namespace std;

int main(){

  int ages[5];
  int sumAge = 0 ; //การไม่ประกาศค่าเริ่มต้นตัวแปร และพยายามใส่ operator เข้าไป ตัวแปรนั้นจะหยิบค่าบางอย่าง ที่ระบบเก็บมันเอาไว้ ส่งผลทำให้การคำนวนออกมาผิดได้

  for(int i = 0 ; i < 5 ; i++){
    cout << "รับอายุคนที่" << (i+1) << ":";
    cin >> ages[i];
    sumAge = sumAge + ages[i];
  }

  for(int i = 0 ; i < 5 ; i++){
    cout << "อายุคนที่:" << (i+1) << "=" << ages[i] << endl;

  }

    cout << "อายุรวมกันที่" << sumAge << endl;

  return 0;
}