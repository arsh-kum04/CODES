/*#include<iostream>
#include<algorithm>
using namespace std;

int firstoc(int &arr,int n,int key){
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
        }
        if(key<arr[mid]){
            ans=0;
            e=mid-1;
        }
        else{
            ans=0;
            s++;
        }
    }
    return ans;
}
int lastoc(int &arr,int n,int key){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid] ==key){
            ans=mid;
            s=mid+1;
        }
        if(key<arr[mid]){
            ans=0;
            e=mid-1;
        }
        else{
            ans=0;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[10];
    cout<<"enter the number for which occurrence is to be find"<<endl;
    int k;
    cin>>k;
    cout<<"enter total no of elements in an array of 10 elements only"<<endl;
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
        cin>>arr[i];

    int n=arr.size();
    int first=firstoc(arr,n,k);
    int second=lastoc(arr,n,k);
    cout<<first<<" "<<second;
    return 0;
}
*/

#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}
int main(){
    firstAndLastPosition;
}