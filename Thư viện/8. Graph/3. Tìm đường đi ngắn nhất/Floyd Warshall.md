## Floyd Warshall
Khác với Dijsktra hay Bellman-Ford, thuật toán Floyd Warshall được sử dụng để tìm đường đi ngắn nhất giữa tất cả các cặp đỉnh trên đồ thị.

## Ý tưởng
Thuật toán dựa trên tư tưởng của quy hoạch động, thuật toán sử dụng một mảng dp hai chiều để lưu chi phí đường đi giữa hai đỉnh của đồ thị.
Ý tưởng chi tiết: [3. Thuật toán Floyd-Warshall](https://vnoi.info/wiki/algo/graph-theory/shortest-path.md#3-thu%E1%BA%ADt-to%C3%A1n-floyd-warshall)

## Độ phức tạp: O($n^3$)

## Cài đặt: [Floyd Warshall](src/FloydWarshall.cpp)
