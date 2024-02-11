//1. import library เพื่อใช้แสดงผลหน้าจอบน Terminal
#include<iostream> 
using namespace std; //สามารถใช้ cout ได้เลย โดยไม่ต้องเขียน std::cout

//2. สร้าง main function ของโปรแกรม 
//pattern ทั่วไปของ function main ให้ระบุเลยว่าเป็น int
int main(){
  int age; //ประกาศตัวแปร age ระบุ type เป็น int
  cout<<"กรุณาพิมพ์อายุเข้ามา: "; //cout -> แสดงผล
  cin >> age; //cin -> รับข้อมูล
  cout << "คุณอายุ \n" << age << endl; //endl = บอกให้โปรแกรมขึ้นบรรทัดใหม่ 

  // age = 30; //reassign value
  // cout << "คุณอายุ \n" << age;

  int newAge;
  cout << "กรุพิมพ์อายุอีกรอบ: ";
  cin >> newAge;
  
  age = newAge;
  cout << "คุณอายุ \n" << age << endl;

  // char favorite;
  // cout << "จงบอกตัวอักษรที่ชอบมา:";
  // cin >> favorite;
  // cout << "ตัวอักษรที่คุณชอบ= " << favorite;

  return 0; //เพื่อบอกว่าโปรแกรมที่เขียนมาด้านบนจนถึง return 0 ถ้าไม่มีปัญหาอะไร ให้ไปบอก system ตอนที่ return 0 กลับไปว่า โปรแกรมเสร็จแล้ว ไม่มีปัญหา
}

//Step 1. แก้ source code
//Step 2. Compile code --> g++ ตามด้วยชื่อไฟล์ -o ชื่อไฟล์ที่ถุก compile
//Step 3. Run code --> ./ ตามด้วยชื่อไฟล์ที่ถูก compile ออกมา

