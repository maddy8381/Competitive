#include<bits/stdc++.h> //include the standard template library (STL)

#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>  //Policy based data structures in g++ (g++ command is a GNU c++ compiler invocation command) 
/* These data structures are designed for high-performance, flexibility, semantic safety, and conformance to the corresponding containers in std.
*/

using namespace __gnu_pbds;
using namespace std;
using ll = long long; // type alias (In C++11, the using keyword when used for type alias is identical to typedef.)
using ld = long double;
using vll = vector<ll> ;
using vvll = vector< vector<ll> >;
using pll = pair<ll, ll> ;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

/*It is often recommended to use scanf/printf instead of cin/cout for a fast input and output.
 However, you can still use cin/cout and achieve the same speed as scanf/printf by including following line*/
#define fastio(); ios_base::sync_with_stdio(false); cin.tie(NULL); 


/* ios_base::sync_with_stdio(false)- It toggles on or off the synchronization of all the C++ standard 
streams with their corresponding standard C streams*/

// tie() is a method which simply guarantees the flushing of std::cout before std::cin accepts an input

int main() {
    fastio();
    
}
