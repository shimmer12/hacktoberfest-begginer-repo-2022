
#include <bits/stdc++.h>
using namespace std;


class gra {
public:
	map<long long, bool> visited;
	map<long long, list<long long> > adj;

	
	void ddt(long long v, long long w);

	void DFS(long long v);
};

void gra::ddt(long long v, long long w)
{
	adj[v].push_back(w); 
}

void gra::DFS(long long v)
{
	
	visited[v] = true;
	cout << v << " ";

	list<long long>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{

	gra g;
	g.ddt(0, 1);
	g.ddt(0, 2);
	g.ddt(1, 2);
	g.ddt(2, 0);
	g.ddt(2, 3);
	g.ddt(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	
	g.DFS(2);

	return 0;
}


