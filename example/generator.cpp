// This code generates tests for the following problem
// Given two integers a and b output their sum

#include <bits/stdc++.h>
using namespace std;

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
int64_t randint(int64_t l, int64_t r) {return std::uniform_int_distribution<int64_t>(l, r)(rng);}

constexpr int nooftests = 4; // no. of testcases we want to generate
constexpr int noofvars = 1; // even though there are two variables but since their constraints are same we will treat it as one

void geninp(const int constraint[noofvars][2])
{
  // printing two space separated integers in the input file
  cout << randint(constraint[0][0] , constraint[0][1]) << " " ; 
  cout << randint(constraint[0][0] , constraint[0][1]) ;
}

void genout(const string& inp, const string& out)
{
  // since my solution is in sol.cpp this is the command to run its executable
  // note that you have to ensure that you've compiled your solution(if you have 
  // your solution in a compiled language) and the executable exists otherwise 
  // the generator will fail.
  string cmd = "./a.out" ; 
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
    {{1 , 10}}, // constraint for test 1
    {{10 , 100}}, // constraint for test 2
    {{100 , 1000}}, // constraint for test 3
    {{1000, 10000}} // constraint for test 4
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
