// pair sum = Two-Pointer Approach 

#include<vector> 
#include <iostream> 

using namespace std ; 

vector<int> pairSum(vector<int> arr, int tar ){
    vector<int> ans ;
    int n = arr.size() ; 
    int i = 0, j = n-1 ;
    
    while( i < j ){
        int ps = arr[i] + arr[j] ; 
        if(ps > tar ){
            j-- ; 
        }
        else if(ps < tar){
            i++ ;
        }
        else{
            ans.push_back(i) ;
            ans.push_back(j) ;
            return ans ;
        }
    }
    return ans; ; 
}

int main()
{
    vector<int> arr = {2,3,5,7,9,11 } ;
    int target = 14 ; 
    
    vector<int> answer = pairSum(arr, target) ;
    cout<<"[" << answer[0] << ","<< answer[1] << "]" ; 
    return 0; 
}
