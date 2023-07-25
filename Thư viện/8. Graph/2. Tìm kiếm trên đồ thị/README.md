# BFS và DFS
## 1. BFS
BFS - Breadth-first search, thuật toán duyệt theo chiều rộng, là một trong những thuật toán tìm kiếm cơ bản và thiết yếu trên đồ thị. Mà trong đó, những đỉnh nào gần đỉnh xuất phát hơn sẽ được duyệt trước.

![Alt Text](https://upload.wikimedia.org/wikipedia/commons/5/5d/Breadth-First-Search-Algorithm.gif?20100504223639)

Mã giả thuật toán:
```
BFS (G, s)                   //G là đồ thị và s là nút xuất phát
      Khởi tạo hàng đợi Q.
      Q.enqueue( s ) //insert s vào hàng đợi

      đánh dấu s là đã đến thăm.
      while ( Q không rỗng)
           //
           v  =  Q.dequeue( )

          //duyệt qua các đỉnh kề của Q  
          for all neighbours w of v in Graph G
               if w chưa được đến thăm
                        Q.enqueue( w )             //
                        đánh dấu w là đã đến thăm.
```
BFS có độ phức tạp là O(V + E) khi cài đặt đồ thị đồ thị theo danh sách kề.

## 2. DFS
DFS - Depth First Traversal, thuật toán duyệt theo chiều sâu, là một thuật toán duyệt trên đồ thị giống BFS. Tuy nhiên khác với BFS, trong thuật toán DFS các đỉnh sẽ được duyệt theo chiều sâu của đồ thị, khi không duyệt sâu tiếp được sẽ backtrack lại để duyệt các đỉnh khác.

![Alt Text](https://upload.wikimedia.org/wikipedia/commons/7/7f/Depth-First-Search.gif)

Mã giả thuật toán:
```
DFS(G, u)
    u.visited = true
    for each v ∈ G.Adj[u]
        if v.visited == false
            DFS(G,v)
     
main() {
    For each u ∈ G
        u.visited = false
     For each u ∈ G
       DFS(G, u)
}
```
DFS có độ phức tạp O(V + E) tuy nhiên tốc độ sẽ có phần chậm hơn so với BFS do nó sử dụng đệ quy.
