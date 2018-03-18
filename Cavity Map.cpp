#include <bits/stdc++.h>

using namespace std;
int check(int a,vector<string> grid,int row,int col)
{
    int i,j,l=0;
    for(i=0;i<grid.size();i++)
    {
        for(j=0;j<grid[i].length();j++)
        {
            if(i==row&&j==col)
            {
                if(grid[i-1][j]<a&&grid[i][j-1]<a&&grid[i][j+1]<a&&grid[i+1][j]<a)
                    l=1;
            }
        }
    }
    return l;
}
vector <string> cavityMap(vector <string> grid) {
    // Complete this function
    int i,j;
    vector<string> hai;
    for(i=0;i<grid.size();i++)
    {
        for(j=0;j<grid[i].length();j++)
        {
            if(i!=0&&i!=grid.size()-1&&j!=0&&j!=grid[i].length()-1)
            {
                if(check(grid[i][j],grid,i,j))
                      cout<<"X";
                else
                    cout<<grid[i][j];
            }
            else
                cout<<grid[i][j];
        }
        cout<<"\n";
    }
    return hai;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    vector <string> result = cavityMap(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
