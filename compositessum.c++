#include <iostream>

using namespace std;

typedef long long ll;

ll prime(ll n)
{
    for (ll i =  2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            return 1;
        }
        
    }
    return 0;
}

void primecheck(ll x, ll y)
{
    if (prime(x)+prime(y) == 2)
    {
       cout << x << " " << y << "\n";
       return ;
    }
    else if (prime(y) == 0 || prime(x) == 0)
    {
        primecheck(x+1, y-1);
    }
}

int main()
{
    ll n;
    cin >> n;
    if (n%2 == 1)
    {
        primecheck((n/2)+1, n/2);
    }
    else
    {
        primecheck(n/2, n/2);
    }
    
  return 0;
}