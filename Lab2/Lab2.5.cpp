#include <iostream>

using namespace std;

#define SIZE 50 //Defining max size of array

int main()

{
    int array[SIZE];
    int i, max, min, size;
    
    cout<<"Enter array size:\n ";
    cin>>size;
  
    cout<<"Enter "<<size <<"array elements: ";
    for(i=0; i<size; i++)
        cin>>array[i];
    
    max = array[0];
    min = array[0];
    
    for(i=1; i<size; i++)
    {
    //check if greater than max
        if(array[i] > max)
            max = array[i];
        // check if smaller than min
        if(array[i] < min)
            min = array[i];
    }
    // Print max and min
    cout<<"\nMaximum element =" << max << "\n";
    cout<<"Minimum element =" << min << "\n";
    return 0;

}
