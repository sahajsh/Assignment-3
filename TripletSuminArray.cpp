#include <bits/stdc++.h>
using namespace std;

bool answer(int arr[], int size, int x){
    int sum, start, end, i, j;
    sort(arr, arr + size);
    for(i = 0; i < size - 2; ++i){
        start = i + 1;
        end = size - 1;
        while(start < end){
            sum = arr[start] + arr[i] + arr[end];
            if(sum == x){
                return true;
            }
            else if(sum > x){
                end--;
            }
            else if(sum < x){
                start++;
            }
        }
    }
    return false;
}
int main(){
    
        int size, x, i;
        cin >> size >> x;
        int arr[size];
        for(i = 0; i < size; ++i)   cin >> arr[i];
        
        cout << answer(arr, size, x);
        cout << endl;
    
}
