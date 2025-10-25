#include <iostream>
using namespace std;
using ll = long long;
 
ll max_pizza_consumed(ll pizza_pieces) {
    if (pizza_pieces <= 2) return 0;
    ll div = pizza_pieces / 3;
    ll rem = pizza_pieces % 3;
    ll hao_eats = div;
    if (rem == 2) hao_eats++;
    return hao_eats + max_pizza_consumed(div + (rem > 0));
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num_cases;
    cin >> num_cases;
    while (num_cases--) {
        ll initial_pizza;
        cin >> initial_pizza;
        cout << max_pizza_consumed(initial_pizza) << '\n';
    }
    return 0;
}