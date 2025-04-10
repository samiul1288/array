#include<bits/stdc++.h>
using namespace std;
int main(){
	
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int,int>freq;
        for(int i=0;i<n;i++){
		freq[a[i]]++;
        }
        int max_freq=0;
        int number_to_remove=-1;
        for(auto i:freq){
		if(i.second>max_freq){
			max_freq=i.second;
			number_to_remove=i.first;
			
		}
		else if(i.second==max_freq){
			  number_to_remove = max(number_to_remove, i.first);
		}
        }
        vector<int> result;
        for (int x : a) {
            if (x != number_to_remove) {
                result.push_back(x);
            }
        }
         cout << result.size() << endl;

        // Output the modified array
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
        
        
}
	
