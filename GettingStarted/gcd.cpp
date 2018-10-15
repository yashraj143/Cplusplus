#include<stdio.h>

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main(){

  int a,b;
  cin>>a;
  cin>>b;
  int c = GCD(a,b);
  cout<<c<<endl;

}
