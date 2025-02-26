#include<iostream>
using namespace std;
int main(){
    int s = 5;
    int arr [s]= {8,7,1,8,9};

    for (int i = 1; i < s; i++)
    {
        int j =i-1;
        int temp = arr[i];

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}