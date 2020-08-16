#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[20],s2[20];
    int i,j,l=0,flag=0;
    cout<<"Enter the String : ";
    cin>>s1;
    l=strlen(s1)-1;
    for(i=l;i>=0;i--)
        for(j=1;j<=0;j++)
        {
            s2[j]=s1[i];
        }
            if(strcmp(s1,s2))
                flag = 1;
            if(flag==1)
                cout<<s1<<" is not a palindrome";
            else
                cout<<s1<<" is a palindrome";
    return 0;
}
