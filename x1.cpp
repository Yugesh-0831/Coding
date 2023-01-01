#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){


int a[5] = {1,4,7,8,5};
int b[5]= {2,1,4,5,7};

set<int> s;

for(int i=0;i<5;i++){
s.insert(a[i]);
s.insert(b[i]);
}

set<int>::iterator itr;

for (itr = s.begin();
       itr != s.end(); itr++)
  {
    cout << *itr << " ";
  }

return 0;
}