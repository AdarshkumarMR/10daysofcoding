#include<iostream>
using namespace std;
int gcd(int d,int n) {
    if(n==0) {
        return d;
    }
    else {
        return gcd(n,d%n);
    }
}
void leftrotate(int arr[],int d,int n) {
    d=d%n;
    int g_c_d = gcd(d,n);
    for(int i=0; i<g_c_d; i++) {
        int temp = arr[i];
        int j=i;

        while(1) {
            int k=j+d;
            if(k>=n) {
                k=k-n;
            }
            if(k==i)
             {
                break;
            }
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}

void printarray(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    leftrotate(arr,d,n);
    printarray(arr,n);
    return 0;
}
