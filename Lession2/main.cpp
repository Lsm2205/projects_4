#include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
class Person {
public:
  char name[50];
  int age;
  int pol;
  int weight;
  void changeName();
  void changeWeight(int manWeight);
};
 
class Student : public Person
{
  int year;
public:
  Student(char *a, int Age, int Pol, int Weigh, int Year);
  void incYear();
  void changeYear();
  void show();
};
 
void Person :: changeName()
{
  char a[50];
  cout<<"Input name: \n";
  gets(a);
  memset(name,' ', strlen(name)+1);
  strcpy(name,a);
}
 
void Person :: changeWeight(int manWeight)
{
  cout<<"Input weight: \n";
  cin>>weight;
}
 
Student :: Student(char *a, int Age, int Pol, int Weigh, int Year)
{
  strcpy(name,a);
  age = Age;
  pol = Pol;
  weight = Weigh;
  year = Year;
}
 
void Student :: incYear()
{
  int Inc;
  cout<<"Add year :\n";
  cin>>Inc;
  year += Inc;
}
 
void Student :: changeYear()
{
  cout<<"Input year: \n";
  cin>>year;
 
 
}
