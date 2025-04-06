#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,15,80,67};
    int max = arr[0];
    
    for(int i = 1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Maximum element is this array is"<<max;

}