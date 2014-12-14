#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
#include <complex>
#include <sstream>
#include <numeric>
#include <functional>

using namespace std;

#define EPS 1e-10
#define INF (1L << 30)
#define LINF (1LL << 60)

#define REP(i,s,n,k) for( int i = s; i < (n); i+=k )
#define REP0(i,n,k) REP(i,0,n,k)
#define rep(i,n) REP(i,0,n,1)


class Node{
public:
  int cost;
  int p;
  Node( int cost, int p ):cost(cost), p(p)
  {

  }
  bool operator < ( const Node &o ) const{
    return cost > o.cost;
  }
};

typedef queue<Node> Q;
typedef priority_queue<Node> PQ;

typedef double R;
typedef complex<R> P;
// size of std::vector dimention vector
typedef struct L : public vector<P>{} L;
typedef struct S : public vector<P>{} S;
typedef vector<P> G;
typedef struct C{
  P p;
  R r;
}C;

int dx4[] = { 0, 1, 0,-1};
int dy4[] = { 1, 0,-1, 0};
int dx8[] = { 0, 1, 1, 1, 0,-1,-1,-1};
int dy8[] = {-1,-1, 0, 1, 1, 1, 0, -1};

///////////////////////////////////////////
//
// main 
//
///////////////////////////////////////////
int main(){
  L l;
  return 0;
}

// library
template< typename T >
T gcd( T a, T b ){ return b ? gcd(b, a%b):a; }

template< typename T >
T lcd( T a, T b ){ return a / gcd(a, b)*b; }
template< typename T >
string toString( T t ){ stringstream ss; ss << t; return ss.str(); }
void replaceAll(string &str,const string from,const string to){
  string::size_type pos = 0;
  while((pos=str.find(from))!= string::npos)
    {
      str.replace(pos,from.size(),to);
    }
}
std::vector< std::string > split( std::string s, std::string delimiter )
{
  std::vector< std::string > v;
  for ( size_t p = 0; ( p = s.find( delimiter ) ) != s.npos; )
    {
      v.push_back( s.substr( 0, p ) );
      s = s.substr( p + delimiter.size( ) );
    }
  v.push_back( s );
  return v;
}
std::vector< std::string > splitFirst( std::string s, const std::string delimiter )
{
  std::vector< std::string > v;
  size_t p = s.find( delimiter );
  if ( p != s.npos )
    {
      v.push_back( s.substr( 0, p ) );
      s = s.substr( p + delimiter.size( ) );
    }
  v.push_back( s );
  return v;
}
