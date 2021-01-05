#include "bits/stdc++.h"

using namespace std;

int main(){


    string a,c="";
    getline(cin,a);
    int j=0;
    for(int i=0;i<a.length();i++){
        if((a[i]>='0' && a[i]<='9') || (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')){
            c+= tolower(a[i]);
        }
    }
    string b = c;
    reverse(c.begin(),c.end());
    if(b==c){
        cout << "É palíndromo" << endl;
    } else {
        cout << "Não é palíndromo" << endl;
    }
    return 0;
}