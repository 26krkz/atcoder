#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W; cin >> H >> W;
  vector<vector<char>> vec(H, vector<char>(W));
  for (int hi = 0; hi < H; hi++) {
    for (int wi = 0; wi < W; wi++) {
      cin >> vec.at(hi).at(wi);
    }
  }
  vector<int> resultH(0);
  for (int hi = 0; hi < H; hi++) {
    for (int wi = 0; wi < W; wi++) {
      if (vec.at(hi).at(wi) == '#') {
        resultH.push_back(hi);
        break;
      } 
    }
  }
  vector<int> resultW(0);
  for (int wi = 0; wi < W; wi++) {
    for (int hi = 0; hi < H; hi++) {
      if (vec.at(hi).at(wi) == '#') {
        resultW.push_back(wi);
        break;
      }
    }
  }
       
  for (int hi = 0; hi < H; hi++) {
    for (int wi = 0; wi < W; wi++) {
	  for (int rHi = 0; rHi < resultH.size(); rHi++) {
        for (int rWi = 0; rWi < resultW.size(); rWi++) {
    	  if (resultH.at(rHi) == hi && resultW.at(rWi) == wi) {
            cout << vec.at(hi).at(wi);
      	  }
        }
      }
      for (int rHi = 0; rHi < resultH.size(); rHi++) {
        if (resultH.at(rHi) ==hi && wi == W - 1) {
          cout << endl;
        }
      }
    }
  }
}
