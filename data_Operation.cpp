#include <iostream>
#include <bits/stdc++.h>

std::ifstream f("./files/data.in");
std::ofstream g("./files/data.out");

int main() {
    int a, b, sum;

    f >> a >> b;
    sum = a+b;
    g << sum;
    return 0;
}