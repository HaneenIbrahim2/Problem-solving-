#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef pair <int, int> intpair;
#define longlongvector vector<long long>
#define llvector vector<long long>
typedef long long ll;
#define pause system("pause")
#define overtwo >> 1
#define intvector vector<int> 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define reverseall(x) reverse(all(x))
#define size size()
#define ever for(;;)
#define isnotempty(s) !s.empty()
#define space " "
// deque --> insert or delete in the end or beginning O(1), access O(1), insert or delete in the end or beginning O(n) 
// tips on binary search algorithm -> create mid outside the loop, check what you want, be careful on the boundries, check condition is very important
// tips on binary search algorithm -> try to simulate the search first, detecting that its binary search problem is fine, how to write it is the real thing
// count ... returns a number of time an element occurs in any array or vector  count ( a.begin, a.end, item )
// lowerebound --> first equal or greater than .... upper -> first greater than 
// you can memeset a 2d char array....
// a pair is sorted according to its first
// sort(v.rbegin(), v.rend()-1);
// best practice strategy dealing with string creation or manipulation is to use a char array when needed.
// nth element -> sort array at some index with the previous <= it -> O(n) can be used if we don't care about sum of first k sorted elements
// loop through a map for (auto const& x : mp)
string yes[3] = { "YES", "Yes", "yes" }; string no[3] = { "NO", "No", "no" };
#define inf 0x3f3f3f3f
int countones(int a) { int count = 0; while (a != 0) { count++; a = a & (a - 1); } return count; }
int countones(ll a) { int count = 0; while (a != 0) { count++; a = a & (a - 1); } return count; }
unsigned int reverse_bits(register unsigned int x) { x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1)); x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2)); x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4)); x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8)); return((x >> 16) | (x << 16)); }
#define here cout<<"here"<<endl;
#define maxelement(x) *max_element(all(x));
ll sum(ll n) { return (n * (n + 1)) / 2; }
ll rangesum(ll a, ll b) { if (a <= 1) return sum(b); return sum(b) - sum(a - 1); }
bool isPowerOfTwo(int n) { if (n == 0) return false; return (ceil(log2(n)) == floor(log2(n))); }
inline bool cmp(ll a, ll b) { return a > b; }

int main() 
{
	fast;

}