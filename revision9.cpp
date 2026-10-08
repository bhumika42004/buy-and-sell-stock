#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={7,1,5,3,6,4};
    int size=6;
    int mp=0;
    int bestbuy=vec[0];
    for(int i=0;i<size;i++){
if(vec[i]>bestbuy){
    mp=max(mp,vec[i]-bestbuy);
}
bestbuy=min(bestbuy,vec[i]);
    }
cout<<bestbuy<<endl;
cout<<mp<<endl;
return 0;
    } 
