#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream file;
    file.open("outputfile.txt" , ios::app);
    
    int price;
    string name;
    while(cin>>name>>price){
        file << name <<" "<<price<<endl;
    }
    file.close();
     return 0;
}