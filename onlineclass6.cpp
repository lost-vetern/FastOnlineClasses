#include<iostream>

using namespace std;

int main(){
    //Structures
    //     //collection of variables
    
    // struct student{
    //     int rollnumber;
    //     string name;
    //     float gpa;

    //     void setValues(int r, string n,float g){
    //         rollnumber=r;
    //         name=n;
    //         gpa=g;
    //     }

    //     int sum(int a, int b){
    //         return a+b;
    //     }
    // };

    // student array[5];

    // int trollnumer;
    // string tname;
    // float tgpa;
    // //data entry
    // for(int i=0;i<5;i++){
    //     cin>>trollnumer>>tname>>tgpa;
    //     array[i].setValues(trollnumer,tname,tgpa);
    // }

    // //displaying
    // cout<<" Rollnumber "<<" name "<<" gpa "<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<< array[i].rollnumber <<"  "<< array[i].name << "  "<< array[i].gpa <<endl;
    // }
    

    ///2nd code
    struct kuchb{
        void sum(int a,int b){
             cout<<a+b;}
        void multiply(int a,int b){
            cout<<a*b;
        }
    };

    kuchb abc;
    abc.multiply(5,4);
    return 0;
}