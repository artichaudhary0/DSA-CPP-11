#include<iostream>
using namespace std;

/*
Array : It is a collection of similar datatype value.


*/

int main()
{
    // total variable : 9 DSA 
    // int grid1 = 1234 ; 
    // int grid2 = 1234 ; 
    // int grid3 = 1234 ; 
    // int grid4 = 1234 ; 
    // int grid5 = 1234 ; 
    // int grid6 = 1234 ; 
    // int grid7 = 1234 ; 
    // int grid8   234 ; 
    // int grid9 = 1234 ; 
    
    // datatype arrayName[size] ; // DYNAMIC 
    // datatype arrayName[size] = {1,2,2,3,54,3,34,5} ; // STATIC 
    
    // int dsa11[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = 11;
    int dsa11[n] = {1,2,3,4,5,6,7,8,9,10,11};
                //   0 1 2 3 4 5 6 7 8 9 10
    
    // calling single value : arrayName[index]            
    // cout<<dsa11[0]<<endl;            
    // cout<<dsa11[1]<<endl;            
    // cout<<dsa11[2]<<endl;            
    // cout<<dsa11[3]<<endl;            
    // cout<<dsa11[4]<<endl;            
    // cout<<dsa11[5]<<endl;            
    // cout<<dsa11[6]<<endl;            
    // cout<<dsa11[7]<<endl;            
    // cout<<dsa11[8]<<endl;            
    // cout<<dsa11[9]<<endl;            
    // cout<<dsa11[10]<<endl; 
    
    // starting 0 end n-1(10)
    
    for(int i = 0 ; i <= n-1 ; i++)
    {
        cout<<dsa11[i]<<endl; 
    }

    float dsa12[11] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10,11.11};
    
    cout<<dsa12[0]<<endl;            
    cout<<dsa12[1]<<endl;            
    cout<<dsa12[2]<<endl;            
    cout<<dsa12[3]<<endl;            
    cout<<dsa12[4]<<endl;            
    cout<<dsa12[5]<<endl;            
    cout<<dsa12[6]<<endl;            
    cout<<dsa12[7]<<endl;            
    cout<<dsa12[8]<<endl;            
    cout<<dsa12[9]<<endl;            
    cout<<dsa12[10]<<endl; 
    
    char dsa13[11] = {'a','b','c','d','e','f','g','h','i','j','k'};
    
    cout<<dsa13[0]<<endl;            
    cout<<dsa13[1]<<endl;            
    cout<<dsa13[2]<<endl;            
    cout<<dsa13[3]<<endl;            
    cout<<dsa13[4]<<endl;            
    cout<<dsa13[5]<<endl;            
    cout<<dsa13[6]<<endl;            
    cout<<dsa13[7]<<endl;            
    cout<<dsa13[8]<<endl;            
    cout<<dsa13[9]<<endl;            
    cout<<dsa13[10]<<endl; 
    
    bool dsa14[11] = {true,false,true,false,true,true,false,false,true,true,false};
    
    cout<<dsa14[0]<<endl;            
    cout<<dsa14[1]<<endl;            
    cout<<dsa14[2]<<endl;            
    cout<<dsa14[3]<<endl;            
    cout<<dsa14[4]<<endl;            
    cout<<dsa14[5]<<endl;            
    cout<<dsa14[6]<<endl;            
    cout<<dsa14[7]<<endl;            
    cout<<dsa14[8]<<endl;            
    cout<<dsa14[9]<<endl;            
    cout<<dsa14[10]<<endl; 
    
    string dsa15[11] = {"hello","hello","hello","hello","hello","hello","hello","hello","hello","hello","hello"};
    
    cout<<dsa15[0]<<endl;            
    cout<<dsa15[1]<<endl;            
    cout<<dsa15[2]<<endl;            
    cout<<dsa15[3]<<endl;            
    cout<<dsa15[4]<<endl;            
    cout<<dsa15[5]<<endl;            
    cout<<dsa15[6]<<endl;            
    cout<<dsa15[7]<<endl;            
    cout<<dsa15[8]<<endl;            
    cout<<dsa15[9]<<endl;            
    cout<<dsa15[10]<<endl; 
}