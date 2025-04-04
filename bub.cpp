#include <iostream>
using namespace std;

int main() {
  char x; // x สำหรับประเภทไขมุก
  int y; // y สำหรับปริมาณไขมุก (กรัม)
  char z;   // z สำหรับประเภทชา
  int a, b; // a สำหรับระดับความหวาน, b สำหรับปริมาตรชา (cc)

  // รับข้อมูลไขมุกและปริมาณไขมุก
  cin >> x >> y;

  // รับข้อมูลชา, ระดับความหวาน และปริมาตรชา
  cin >> z >> a >> b;

  // คำนวณพลังงานจากไขมุก
  int bubbleEnergy;
  if (x == 'H') {
    bubbleEnergy = 5; // 5 แคลอรี่ต่อกรัม
  } else if (x == 'O') {
    bubbleEnergy = 3; // 3 แคลอรี่ต่อกรัม
  } else if (x == 'J') {
    bubbleEnergy = 2; // 2 แคลอรี่ต่อกรัม
  }

  // คำนวณพลังงานจากชา
  int teaEnergy = 0;
  if (z == 'R') {
    if (a == 1)
      teaEnergy = 12 * b;
    else if (a == 2)
      teaEnergy = 18 * b;
    else if (a == 3)
      teaEnergy = 25 * b;
  } else if (z == 'T') {
    if (a == 1)
      teaEnergy = 15 * b;
    else if (a == 2)
      teaEnergy = 20 * b;
    else if (a == 3)
      teaEnergy = 30 * b;
  } else if (z == 'M') {
    if (a == 1)
      teaEnergy = 10 * b;
    else if (a == 2)
      teaEnergy = 15 * b;
    else if (a == 3)
      teaEnergy = 20 * b;
  }

  // คำนวณพลังงานรวม
  int totalEnergy = bubbleEnergy * y + teaEnergy;

  // แสดงผลลัพธ์
  cout << totalEnergy << endl;

  return 0;
}
