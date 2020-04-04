#include<iostream>
using namespace std;


int main(){
    string str;
    cout<<"Enter a word: ";
    cin>>str;    
    try
    {
        if(str.at(0)!='a'||
        str.at(0)!='e'||
        str.at(0)!='i'||
        str.at(0)!='o'||
        str.at(0)!='u')
        {
           throw str; 
        }

    }
    catch(string x)
    {
        cout<<x<<" is not a vowel";
    }
    
    return 0;
}