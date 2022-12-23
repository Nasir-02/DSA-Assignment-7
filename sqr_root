// sqrt 

#include<iostream>
using namespace std;
    int Guess(int n){
    long low=1,high=n;
    while(low<=high){
        long long mid=(low+mid)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            high=mid-1;
        }
        else if(mid*mid<=n){
            if((mid+1)*(mid+1)>n){
            return mid;
            }
            low=mid+1;
        }
        return 0;
    }
}
int main (){
	int a;
	cin >> a;
	cout << Guess(a);
	return 0;
}
