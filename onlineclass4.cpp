#include<iostream>
#include<fstream>
using namespace std;

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

// counting numbers of 1
int onesCount(string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str.at(i)=='1'){
            count++;
        }
    }
    return count;

}

int main(){
    ifstream file;
    file.open("outputfile.txt");

    if(!file){
        cout<<"File do not exist";
    }
    else {cout<<"File exists\n";

    string str;
    
    while(file>>str){
        cout<<"The number of 1's in "<<str<<" is "<<onesCount(str)<<endl;
        
        // cout<<str<<" : ";
        // equationValidation(str);
        // cout<<endl;
    }

    }
    file.close();
    return 0;
}