#include <iostream>
using namespace std;
int main()
{
int b[6] = {7, 3, 2, 32, 37, 27};
int i, j, m, n;
i = b[1];
j = b[2]++;
m = b[i++];
n = b[++j];
cout << i << " " << j << " " << m << " " << n;
system("pause");
return 0;
}
