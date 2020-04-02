#include <iostream>
using namespace std;

//char array
void charArray(string str){
    char array[str.length()];
    for(int i=0; i<str.length(); i++){
        array[i]=str.at(i);
    }

    for(int i=0; i<str.length(); i++){
        cout<<array[i]<<" , ";
    }
}

//  equation validation
void equationValidation(string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str.at(i)=='(') count++;

        else if (str.at(i)==')') count--;
    }

    if(count==0)cout<<"its a valid equation";
    else if(count>0) cout<<"left bracket is "<< count << " times more";
    else if(count<0) cout<<"Right bracket is "<< count*-1 << " times more";
}

//palindromic words
void reverse(string &str){
    string result="";
    for(int i=str.length()-1; i>=0; i--){
       result+=str.at(i);
    }
   str=result;
}


int main(){
    string str;
    string res;

    cout<<"Enter a word: ";
    cin>>str;

    res=str;

    reverse(str);

    if(str.compare(res)==0)
    cout<<"The word is palindromic";
    else 
    cout<<"its not palindromic";
    return 0;
}