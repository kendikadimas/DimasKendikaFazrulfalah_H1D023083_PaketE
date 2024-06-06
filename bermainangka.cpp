#include <iostream>
#include <algorithm>
using namespace std;

//memeriksa apakah bilangan prima atau bukan
bool isPrime(int num){
    if (num<=1) return false;
    for (int i=2;i*i <=num;i++){
        if(num%i==0)return false;
    }
    return true;
}

//mencari nilai di array menggunakan linear search
int linearSearch(int arr[], int n, int x){
    for (int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
}
return -1;
}

int main(){

    int n, m;
    cin >> n >>m;

    int array_A[n];
    int array_B[m];

    //input array a
    for(int i=0;i<n;i++){
        cin>>array_A[i];
    }

    //input array b
    for(int i=0;i<m;i++){
        cin>>array_B[i];
    }

    int results[n+m]; //Menggunakan array untuk hasil
    int result_count = 0; //Counter untuk hasil

    for (int i = 0; i < n; i++){
        linearSearch(results, n, i);
            if(isPrime(results[i])==true){
            result_count++;
        }
    }
   
    sort(results, results + result_count);

    if(result_count == 0){
        cout << "TIDAK ADA" << endl;
    } else if (isPrime(results[n+m])==true){
            cout<<results;
    }
}
 