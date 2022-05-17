[11:31 PM] Rasnakawewa C.V.B it21285738
#include<iostream>
#include "Box.h"
using namespace std;// Implement setters and getters
void Box :: setMeasurements(int l, int w, int h)
{
length = l;
width = w;
height = h;
}int Box :: getLength()
{
return length;
}int Box :: getWidth()
{
return width;
}int Box :: getHeight()
{
return height;
}
// Implemenet the calcVolume() function
int Box::calcVolume()
{
return length * width * height;
}

[11:31 PM] Rasnakawewa C.V.B it21285738
class Student
{
private:
int studentId;
char name[20];
public:
void assignDetails(int sId, char sName[]);
void display();
};

