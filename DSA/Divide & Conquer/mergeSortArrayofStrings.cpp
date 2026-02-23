#include<iostream>
#include<vector>
using namespace std ;

void merge(vector<string>& arr, int left, int mid, int right){
    vector<string> temp ;
    int i = left ;
    int j = mid+1 ;
    while(i <= mid && j <= right){
        if ( arr[i] < arr[j] ){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0; i < temp.size(); i++){
        arr[left+i] = temp[i];
    }
}

void mergeSort(vector<string>& arr, int left, int right){
    if ( left >= right ){
        return ;
    }
    int mid = left + (right-left)/2 ;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main()
{
    vector<string> arr = {"sun","earth","mars","mercury"};

    mergeSort(arr,0,arr.size()-1);

    for(string s: arr){
        cout << s << " " ;
    }
    cout << endl ;
    return 0 ; 
}