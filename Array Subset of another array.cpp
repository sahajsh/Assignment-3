#include<bits/stdc++.h>
using namespace std;
int main()
 {
    
        int m,n;
        cin>>m>>n;
        int arr1[m];
        int arr2[n];
        for(int i=0; i<m; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }int c=0,flag=0;
        for(int j=0; j<n; j++){
            c=0;
            for(int i=0; i<m; i++){
                if(arr2[j] == arr1[i]){
                    c++;
                }
            }
            if(c==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    
	return 0;
}
