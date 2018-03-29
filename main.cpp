//Author: McDermott Liam Shimada 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;

  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last

  in>>first;
  in>>last;

while(!in.eof())
{

in>>first;

if(first > 'A' && first > 'Z' && first > 'a' && first > 'z') 

{

first = current;

}

}

while(!in.eof())
{

if(last > 'A' && last > 'Z' && last > 'a' && last > 'z')
{

last = current;

}

}
  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
