    #include<iostream>
    using namespace std;

    void insertion(int arr[], int size){
        int new_size=size;
        for(int i=0; i<size-1; i++){
            if(arr[i]==0 || arr[i]>=100000){
                cout<<"Invalid Input";
                return;
            }
            if(arr[i]%2!=0 && arr[i+1]%2!=0){
                for(int j=size; j>i; j--){
                    arr[j+1]=arr[j];
                }
                arr[i+1]=(arr[i]+arr[i+2])/2;
                i++;
                new_size++;
                size++;
            }
        }

        for(int i=0; i<new_size; i++)   cout<<arr[i]<<" ";
    }

    int main(){
        int size;
        int arr[100];
        cin>>size;

        if(size<2){
            cout<<"Invalid Input";
            return 0;
        }
        for(int i=0; i<size; i++)   cin>>arr[i];

        insertion(arr, size);
    }