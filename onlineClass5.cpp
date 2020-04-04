#include<iostream>

using namespace std;

int main(){
    int v1=100, v2=2;
    //run time errors
    //exception handeling
    try{
        string str="can not divide by zero";
        if(v2==0)
        throw str;
        if(v2==2)
        throw '#';    
       cout<<v1/v2;
    }

    
    catch(string abc){
        cout<<abc;
    }
    catch(int a){
        cout<<a;
    }
    catch(...){
        cout<<"hi i am the genralized catch";
    }
    return 0;
}