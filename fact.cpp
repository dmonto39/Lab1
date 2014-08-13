using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }
template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r;}

#define D(x) cout << #x " = " << (x) << endl;


unsigned long long factorial(unsigned long long a){
   if (a == 0) return 1;
   else return a * factorial(a-1);
}

int main(){
   ios::sync_with_stdio(false);
   unsigned long long a [50];
   a[0] = 1;
   for(int i = 1; i < 50; ++i)a[i] = i*a[i-1]; 
   
   for(unsigned long long i = 0; i < 50; ++i) cout << i << " = " << a[i] << endl;
   return 0;    
}

