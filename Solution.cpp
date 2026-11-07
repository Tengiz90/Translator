#include <iostream>

#include <string>

using namespace std;
string str, a[50000], b[50000], stru, OG;
int j, i, k, n;

void func(string str, int m) {
  int j, i, k, n, ind;
  string c[50000];
  for (i = 0, j = 0, k = 0; k < OG.length(); k++, i++) {
    if (OG[k] != ' ' && OG[k] != '!' && OG[k] != '?' && OG[k] != '.' && OG[k] != ',' && OG[k] != ';' && OG[k] != ':') {
      c[j] += OG[k];
    }
    //		cout <<c[j][i] <<'|';}
    if (OG[k] == ' ') {
      j++;
      i = 0;
      //		cout <<c[j][i] <<'|';
    }
    //	cout <<c[j][i] <<'|';
    if (OG[k] == '!' || OG[k] == '?' || OG[k] == '.' || OG[k] == ',' || OG[k] == ';' || OG[k] == ':') {
      j++;
      i = 0;
      c[j] += OG[k];
      j++;
      i = 0;
      //		cout <<c[j][i] <<'|';
    }

  }
  for (n = 0; n < j; n++) {
    ind = 0;
    for (i = 0; i <= m; i++) {
      if (c[n] == a[i] && c[n + 1] != "!" && c[n + 1] != "?" && c[n + 1] != "." && c[n + 1] != "," && c[n + 1] != ";" && c[n + 1] != ":") {
        ind = 1;
        cout << b[i] << " ";
        break;
      } // else if(c[n]!=a[m]) cout <<c[i] <<" ";
      if (c[n] == a[i] && (c[n + 1] == "!" || c[n + 1] == "?" || c[n + 1] == "." || c[n + 1] == "," || c[n + 1] == ";" || c[n + 1] == ":")) {
        ind = 1;
        cout << b[i];
        break;
      }
    }
    //cout <<ind <<endl;
    if (ind == 0 && c[n + 1] != "!" && c[n + 1] != "?" && c[n + 1] != "." && c[n + 1] != "," && c[n + 1] != ";" && c[n + 1] != ":" && c[n] != "!" && c[n] != "?" && c[n] != "," && c[n] != "." && c[n] != ":" && c[n] != ";")
      cout << c[n] << " ";
    if (ind == 0 && (c[n + 1] == "!" || c[n + 1] == "?" || c[n + 1] == "." || c[n + 1] == "," || c[n + 1] == ";" || c[n + 1] == ":"))
      cout << c[n]; // <<" ";
    if (ind == 0 && (c[n] == "!" || c[n] == "?" || c[n] == "," || c[n] == "." || c[n] == ":" || c[n] == ";"))
      cout << c[n];
    //	if(c[n]=="!" || c[n]=="?" || c[n]=="." || c[n]=="," || c[n]==";" || c[n]==":"))

  }
  //cout<<char(8) <<char(8);

  //cout<<"j";
  cout << endl;
}

int main() {

  int m = 0;
  while (getline(cin, str)) {
    if (str.empty()) {
      break;
    }

    //	getline(cin,str);
    a[m] = str.substr(0, str.find(' '));
    b[m] = str.substr(str.find(' ') + 1, str.find('\0'));
    m++;
  }
  for (; getline(cin, OG), !OG.empty();) {
    //getline(cin,OG);
    func(OG, m);
    //	cout<<endl;
  }
  return 0;
}