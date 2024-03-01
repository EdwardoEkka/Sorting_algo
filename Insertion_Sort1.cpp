// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<string>
int main() {
    int array[10]={11,2,3,4,5,7,6,8,9,10};
    for(int i=0;i<10;i++)
    {
        int currI=i;
        int j=i;
        while(j>=0 && array[j]>=array[currI])
       {
                int temp=array[j];
                array[j]=array[currI];
                array[currI]=temp;
                j--;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
