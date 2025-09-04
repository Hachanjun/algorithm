// 수도코드1 - 방문 처리만 하는 코드
/**
BFS(G, u) 
    u.visited = true
    q.push(u);
    while (q.size())
        u = q.front();
        q.pop();
        for each v : G.Adj[u]
         if v.visited == false
            v.visited = ture
            q.push(v)

// 수도코드2 - 최단거리 계산까지 하는 코드
BFS(G, u)
    u.visited = 1
    q.push
    while (q.size()) {
        u = q.front();
        q.pop();
        for each v : G.Adj[u]
            if v.visited == false
                v.visited = u.visited + 1
                q.push(v)
    }
 */