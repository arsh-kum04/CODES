#include<iostream>
#include <vector>
using namespace std;

static int sum=0;
static int leftsum1=0;
  
    int totalsum(vector<int>&nums,int start,int end){
        //arr,-1,10
        cout<<"inside totalsum function:"<<endl;
       if(start>end){
            return sum;
        }
        else{
        sum+=totalsum(nums,start+1,end-1);//arr,0,9
        }
        return sum;
    }
    
    
    int solve(vector<int>& nums,int start,int end,int sumtotal){//array,0,10,totalsum
        cout<<"inside solve function:"<<endl;
        int leftsum=nums[start];
        leftsum1+=leftsum;
        if(sumtotal==leftsum1){return start;}//
        else{
            sumtotal-=leftsum;
            solve(nums,start+1,end-1,sumtotal);
        }
        return start;
    }
    

    int pivotindex(vector<int>& nums) {
        cout<<"inside pivot index function:"<<endl;
        int end=nums.size();//10
         int tosum=totalsum(nums,-1,end);
        int ans=solve(nums,0,end,tosum);
        return ans;
        
    }

int main(){
    vector<int> nums;
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
        }
    int ans=pivotindex(nums);
    cout<<"the answer is "<<ans;
    return 0;
}