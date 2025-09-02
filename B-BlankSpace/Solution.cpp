#include<iostream>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        long long n;
        cin>>n;
        long long a[n];
        
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        long long count_of_zeroes = 0;
        long long maximum_length = 0;
        
        for(int i = 0;i<n;i++){
            if(a[i] == 0){
                count_of_zeroes++;
                maximum_length = max(count_of_zeroes,maximum_length);
            }
            else{
                count_of_zeroes = 0;
            }
        }
        
        cout<<maximum_length<<endl;
        
    }
}