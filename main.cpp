#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define tc int test; cin>>test; while(test--)
using namespace std; 

int main()
{
    int v, a, r, p, h;
    cin >> v >> a >> r >> p >> h;
    int heights[4] = {v, a, r, p};

    // sortiting 
    sort(heights, heights + 4, greater<int>());


    if (heights[0] + heights[1] + heights[2] >= h) {
        cout << "WAW" << endl;
    } else {
        cout << "AWW" << endl;
    }
    
    return 0;
}