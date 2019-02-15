#include<fstream>
#include<iostream>
using namespace std;
int G[100][100];
int top;
int m;
typedef struct
{int x;
int y;
double cost;} muchie;
muchie v[100];
fstream f("input.dat",ios::in);
fstream g("output.dat",ios::out);
int read_data()
{f>>m;
for(int i=1;i<=m;i++)
    for(int j=1;j<=m;j++) f>>G[i][j];
for(int i=1;i<=m+1;i++)
   {f>>v[i].x;
    f>>v[i].y;
    f>>v[i].cost;}
f.close();
return 0;}
int sort_data()
{int g=0;
while(g==0)
{g=1;
for(int i=1;i<=m;i++)
if(v[i].cost>v[i+1].cost)
{swap(v[i].cost,v[i+1].cost);
swap(v[i].x,v[i+1].x);
swap(v[i].y,v[i+1].y);
g=0;}}}
int print_data()
   {for(int i=1;i<=m;i++)
   {g<<v[i].x<<" ";
    g<<v[i].y<<" ";
    g<<v[i].cost<<" ";}}
int main()
    {read_data();
    sort_data();
    print_data();}
