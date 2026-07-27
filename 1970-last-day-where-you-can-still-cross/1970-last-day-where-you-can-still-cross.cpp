#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<int> parent;
int findp(int x)
{
    if(parent[x]==x) return x;
    return parent[x]=findp(parent[x]);
}

void unite(int a,int b)
{
    int la=findp(a);
    int lb=findp(b);
    if(la!=lb) parent[lb]=la;
}

int latestDayToCross(int row,int col,vector<vector<int>>& cells) {

    int total=row*col;
    int top=total;
    int bottom=total+1;
    parent.resize(total+2);
    for(int i=0;i<total+2;i++) parent[i]=i;
    vector<int> grid(total,0);
    int dr[4]={1,-1,0,0};
    int dc[4]={0,0,1,-1};
    for(int day=cells.size()-1;day>=0;day--)
    {
        int r=cells[day][0]-1;
        int c=cells[day][1]-1;
        int id=r*col+c;
        grid[id]=1;
        if(r==0) unite(id,top);
        if(r==row-1) unite(id,bottom);
        for(int k=0;k<4;k++)
        {
            int nr=r+dr[k];
            int nc=c+dc[k];
            if(nr>=0 && nc>=0 && nr<row && nc<col)
            {
                int nid=nr*col+nc;
                if(grid[nid]==1) unite(id,nid);
            }
        }
        if(findp(top)==findp(bottom)) return day;
    }
    return 0;
}
};