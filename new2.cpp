#include<iostream>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r",stdin);
  freopen("output.txt", "w",stdout);
  #endif

  int savings;
  cin>>savings;

if(savings>5000){
    if(savings>10000)
    {
      cout<<"ANANT IS THE GUY TO CONTACT";
    }
    else {
      cout<<"ANANT IS STILL RICH";
    }
  }
else if(savings>2000){
  cout<<"ELON";
}
  
  else{
    cout<<"BEZOS\n";
  }
return 0;
} // namespace std;

  