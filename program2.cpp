#include<iostream>
using namespace std;
int main(){
    int A[10],i,j,n,temp;
    cout<<"Enter size of array :";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>A[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(A[i]<A[j])
                {
                    temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
                }
            }
    }
    cout<<"Second max number :"<<A[1];
    cout<<"\nSecond min number :"<<A[n-2];
return 0;
}

