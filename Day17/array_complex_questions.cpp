#include<iostream>
using namespace std;

/*
    1 : Avg all the values present in array.
        (SUM OF ALL THE VALUE)/TOTAL NO. OF VALUE

        requirement : 
        1 : length of array : 
            size = sizeof(array)/sizeof(array[0]) 
            sum of all the value


*/

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9,0}; 
    int size = sizeof(array)/sizeof(array[0]);
    float sum = 0 ;
    float avg ;

    for(int i = 0 ; i <size ; i++)
    {
        sum = sum + array[i];
    }

    avg = sum/size;

    cout<<avg;

}