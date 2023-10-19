for (int i = 0; i < m; i++) {
        int aux = v[0][i];
        v[0][i] = v[n-1][i];
        v[n-1][i] = aux;
    }