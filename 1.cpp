#include<iostream>
using namespace std;
int main() {
   int i,n,j,p;
   cout<<"Enter total number of elements:"<<"\n";
   cin>>n;
   int *a = new int(n);
   cout<<"Enter "<<n<<" elements"<<endl;
   for(i = 0;i<n;i++) {
      cin>>a[i];
   }
   cout<<"Entered elements are: ";
   for(i = 0;i<n;i++) {
      cout<<a[i]<<" "<<endl;
   }
  cout << "Prime Numbers are:";

    for (i = 0; i < n; i++) {
        j = 2;
        p = 1;
        while (j < a[i]) {
            if (a[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << a[i] << " ";
        }
        
    }
        return 0;
}
