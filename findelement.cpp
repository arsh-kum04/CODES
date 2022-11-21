#include<iostream>
#include<vector>
using namespace std;


int peak_ele(vector<int> &A){
    int start=0;
    int end=A.size()-1;
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(mid>0 && mid<A.size()-1){
            
            if(A[mid]>A[mid+1] && A[mid]>A[mid-1]){
                return mid;
            }
            else if(A[mid+1]>A[mid]){
                start=mid+1;
            }
            else if(A[mid-1]>A[mid]){
                end=mid-1;
            }
            
        }
    }
     return -1;
}
int BS(vector<int> &A,int B,int start,int end){
  
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(A[mid]==B){
            return mid;
        }
        else if(A[mid]>B){
            end=mid-1;
        }
        else if(A[mid]<B){
            start=mid+1;
        }
    }
     return -1;
}
int BS_Decreasing(vector<int> &A,int B,int start,int end){
  
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(A[mid]==B){
            return mid;
        }
        else if(A[mid]<B){
            end=mid-1;
        }
        else if(A[mid]>B){
            start=mid+1;
        }
    }
     return -1;
}
int solve(vector<int> &A, int B) {
    int peak=peak_ele(A);
    int r1=BS(A,B,0,peak-1);
    int r2=BS_Decreasing(A,B,peak,A.size()-1);
    return max(r1,r2);
    
    
}
