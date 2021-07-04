#include<iostream>
#include<cstring>

using namespace std;

int main()
{
char string[100], pattern[100];
char *ptr;
int length;

cout<<"Enter a string: \n";
cin.getline(string,100);

cout<<"Enter string to remove\n";
cin.getline(pattern,100);

//find the length of the pattern

length = strlen(pattern);

// search pattern inside input string

ptr = strstr(string,pattern);

//delete pattern from string by overwirting it.

strcpy(ptr, ptr+length);
cout<<"final string\n"<< string;
return(0);
}
