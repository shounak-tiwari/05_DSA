#include<iostream>
using namespace std;

int main(){
    int s = 5;
    int arr [s]= {8,7,1,8,9};

    for (int i = 0; i < s; i++)
    {
        for (int j = i; j < s-i; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]  = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    for (int  i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}