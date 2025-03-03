#include<iostream>
using namespace std;

/*
    CRUD  :
        C : Create
        R : Read / Retrive (Display)
        U : Update
        D : delete

    1 : Array Declare/Create and initilize.

    Delete : 
    array[5] = {1,2,3,4,5};
            //  0 1 2 3 4 
            deleted index = 2 
            array[0] = 1
            array[1] = 2
            array[2] = 4 array[i] = array[i+1] // i = 2
            array[3] = 5 array[i] = array[i+1] // i = 3
    array[5] = {1,2,4,5,0}       
*/

int main()
{
    /*
        1 : Dynamic 
        2 : static
    */
    int size = 5 ; // 0 ... size-1 
    int array[size] ;
    int index = -1 ;
    int value ;
    int deleteIndex = -1 ;
    cout<<"Enter the values : "<< endl ;

    // dynamic : User - Input
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"array["<<i<<"] : "; 
        cin>>array[i];
    }

    cout<<endl<<"Array before update"<<endl;
    // read
    for(int i = 0 ; i<size ; i++)
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl;
    }

    // cout<<endl<<"Array after update"<<endl;

    // cout<<"Enter the index which you want to update : ";
    // cin>>index;
    // cout<<"Enter the value : ";
    // cin>>value;

    // array[index] =  value ; 

    // // read
    // for(int i = 0 ; i<size ; i++)
    // {
    //     cout<<array[i]<<endl;
    // }


    // delete : 
    cout<<"Enter the index which you want to delete : ";
    cin>>deleteIndex;


    for(int i = deleteIndex ; i < size-1 ; i++ )
    {
        array[i] = array[i+1];
    }

    cout<<endl<<"Array After delete"<<endl;
    for(int i = 0 ; i < size - 1 ; i++ )
    {
        cout<<"array["<<i<<"] : "<<array[i]<<endl; 
    }



    // cout<<"array["<<deleteIndex<<"] : "<<array[deleteIndex]<<endl; 
    // cout<<"array["<<deleteIndex+1<<"] : "<<array[deleteIndex+1]<<endl; 


    // static developer
    // int array2[size] = {324,324,324,234,234};

    // // read
    // cout<<array2[0]<<endl;
    // cout<<array2[1]<<endl;
    // cout<<array2[2]<<endl;
    // cout<<array2[3]<<endl;
    // cout<<array2[4]<<endl;
}