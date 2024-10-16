// grafosc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <list>

using namespace std;

typedef vector<vector<int>> grafo; // definicion de la constante para uso en metodos más tarde.

void dfes_rec(const grafo& G, int u, vector <bool>& vis, list <int>& L) {
    if (not vis[u])
    {
        vis[u] = true; L.push_back(u);
        for (int v : G[u]) //for each loop to start recursion further
        {
            dfes_rec(G, v, vis, L);
        }
    }

}

list<int> dfs_rec(const grafo& G) { // metodo selección de la recursión
    int n = G.size();
    list<int> L;
    vector<bool> vis(n, false);
    for (int u = 0; u < n; ++u) {
        dfes_rec(G, u, vis, L);
    }
    return L;
}

int main()
{

    int n, m; // n numero de vertices y m numero de aristas
    cout << "Introduce numero de vertices : ";
    cin >> n;
    cout << "Introduce numero de aristas : ";
    cin >> m;
    std::cout << "\n";


    vector <vector<int>> G(n); // grafo g

    //Leer el Grafo por la consola

    for (int i = 0; i < m; i++) {
    
        int x, y;
        printf("Introduce la definion del arista %d : ", (i + 1));
        cin >> x >> y;  //Leo artistas (x,y) del grafo
        G[x].push_back(y);
        G[y].push_back(x);
         

    }
    for (int i = 0; i < n; i++) {
        cout << "Vertices abyacentes a " << i << " :";
        for (int j = 0; j < G[i].size(); ++j) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    //inicio dfs en grafo
    list<int> L;
    L = dfs_rec(G);
    // Recorrer y mostrar la lista
    for (int value : L) {
        cout << value << " ";
    }
    cout << std::endl;
    cout << "Procesamiento finalizado" << endl;
}
