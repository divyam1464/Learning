#include<iostream>
#include<vector>
using namespace std ; 

int merge(vector<int>& arr, int s, int mid , int e){
    vector<int> temp ;
    int i = s , j = mid+1, invCount = 0 ;

    while(i <= mid && j <= e){
        if (arr[i]<= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
            invCount += mid - i + 1 ;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++ ;
    }
    while(j <= e){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=0 ; k < temp.size(); k++){
        arr[s+k] = temp[k] ;
    }
    return invCount ;
}

int mergeSort(vector<int>& arr, int s, int e){
    if (s < e){
        int mid = s + (e-s)/2 ;

        int leftInvCount = mergeSort(arr,s,mid);
        int rightInvCount = mergeSort(arr,mid+1,e);

        int InvCount= merge(arr,s,mid,e);

        return leftInvCount + rightInvCount + InvCount ;
    }
    return 0 ;
}

int main()
{
    vector<int> arr = {1,3,5,10,2,6,8,9};
    // vector<int> arr = {6,3,5,2,7}; ;

    int ans = mergeSort(arr,0,arr.size()-1);
    cout << "The inversion count is : " << ans << endl ;
    return 0 ; 
}