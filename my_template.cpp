#include <bits/stdc++.h>
//#include <atcoder/all>
#ifndef LOCAL
#pragma GCC target("arch=skylake-avx512")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define dbg(...) 42
#else
#include "debug.h"
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#endif
using namespace std;
typedef long long ll;
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define ALL(a) (a).begin(), (a).end()

{% if mod %}
const long long MOD = {{ mod }};
{% endif %}
{% if yes_str %}
const string YES = "{{ yes_str }}";
{% endif %}
{% if no_str %}
const string NO = "{{ no_str }}";
{% endif %}

{% if prediction_success %}
void solve({{ formal_arguments }}){

}
{% endif %}

int main(){
    {% if prediction_success %}
    {{input_part}}
    solve({{ actual_arguments }});
    {% else %}
    // Failed to predict input format
    {% endif %}
    return 0;
}
