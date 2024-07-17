#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

#define mem(a, b) 					 memset(a, (b), sizeof(a))
#define fori(i,a,b)                 for(int i=a;i<b;i++)
#define forir(i,a,b)                for(int i=a;i>=b;i--)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
#define read(type) readInt<type>()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef set<int> si;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const double pi=acos(-1.0);

ll power(ll a, ll n) { ll p = 1; while (n > 0) { if (n % 2) { p = p * a; } n >>= 1; a *= a; } return p; }
ll power(ll a, ll n, ll mod) { ll p = 1; while (n > 0) { if (n % 2) { p = p * a; p %= mod; } n >>= 1; a *= a; a %= mod; } return p % mod; }

/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}
/************************************/

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
 
	int tc;
	tc = read(ll);

	while(tc--){
		write(tc);
	}
	return 0;
}