#include<bits/stdc++.h>
using namespace std;

void Merge(int *a, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int *L = new int [n1];
    int *R = new int [n2];

    for(int i=0; i<n1; i++){
        L[i] = a[l+i];
    }

    for(int i=0; i<n2; i++){
        R[i] = a[m+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k++] = L[i++];
        }
        else{
            a[k++] = R[j++];
        }
    }

    while(i<n1){
        a[k++] = L[i++];
    }

    while(j<n2){
        a[k++] = R[j++];
    }

}

void mergeSort(int *a, int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid+1, right);
        Merge(a, left, mid, right);

    }
}

int binarySearch(int *a, int left, int right, int x){
    int mid = (left+right)/2;

    if(left>right){return -1;}

    else if(a[mid] == x){return mid;}

    else if(a[mid] > x){ return binarySearch(a, left, mid-1, x);}

    else{return binarySearch(a, mid+1, right, x);}



}

void printList(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<i<<" "<<a[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int n = 5000;
    srand(time(0));
    int *a = new int[n];
    for(int i=0; i<n; i++){
        a[i] = (rand()%1001);
    }
    printList(a,n);
    mergeSort(a, 0, n-1);
    cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
    printList(a,n);
    cout<<binarySearch(a, 0, n-1, 12);



    /*int a[] = {20,2,15,90,34,23,6};
    mergeSort(a,0,6);
    printList(a,7);*/

return 0;
}
