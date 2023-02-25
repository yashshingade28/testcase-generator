#include <bits/stdc++.h>
using namespace std;

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
int64_t randint(int64_t l, int64_t r) {return std::uniform_int_distribution<int64_t>(l, r)(rng);}

constexpr int nooftests = ;
constexpr int noofvars = ;

void geninp(const int constraint[noofvars][2])
{

}

void genout(const string& inp, const string& out)
{
  string cmd = "" ;
  cmd += " <" ;
  cmd += inp ;
  cmd += " 1>" ;
  cmd += out ;
  cmd += " 2>/dev/null" ;
  if (system(cmd.data()) != 0)
  {
    cerr << "Failed to generate output for " << out << '\n';
    exit(EXIT_FAILURE) ;
  }
}

int main()
{
  ios_base::sync_with_stdio(false) ; cin.tie(nullptr) ;

  int constraint[nooftests][noofvars][2] =
  {

  };

  for (int i = 0 ; i < nooftests ; i++)
  {
    string testnum = to_string(i) ;
    string inp = "input/inp" + testnum + ".txt" ;
    string out = "output/out" + testnum + ".txt" ;

    freopen(inp.data() , "w" , stdout) ;
    geninp(constraint[i]) ;
    cout.flush() ;

    genout(inp, out) ;
  }
}
