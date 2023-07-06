#include <iostream>
using namespace std;
int getLength(char name[]){
int count = 0 ;
for(int i = 0 ; name[i] != '\0' ; i ++)
{
  count ++ ;
}
return count ;
}

int main(){

char name[10];
cout << " enter name " << endl;
cin >> name;
cout << name << endl;
cout << " your name is : " << endl;
cout << name << endl;
int len = getLength(name);
cout << " length of string is << len << endl;
}
