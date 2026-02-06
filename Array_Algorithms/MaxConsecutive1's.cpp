#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0,1,1,0,1,0,1,0,1,1,1};
    int max=0 , count =0;
   
    for(int i=0;i<11;i++){
        if(arr[i]==1){
            count++;
             if(count>max){
             max = count ;
             }
        }
        else{
            count = 0;
        }
    }

    cout << "Maximum count is : "<<max ;
    return 0;
}
