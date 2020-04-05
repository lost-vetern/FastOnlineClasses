#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string array[100];
    ifstream file;
    file.open("outputfile.txt");

    if(!file){
        cout<<"File do not exist";
    }else{
        string line;
        int i=0;
        while(!file.eof()){
            getline(file,line);
            
            //line.find(".") index of "." 
            array[i]=line.substr(0, line.find(".")-1);
            i++;
        }

        for(int j=0;j<=i;j++){
            cout<<array[j]<<endl;
        }

    }

        
    file.close();
}