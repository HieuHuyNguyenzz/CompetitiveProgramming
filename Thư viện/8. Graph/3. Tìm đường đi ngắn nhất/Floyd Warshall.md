## Floyd Warshall
Khác với Dijsktra hay Bellman-Ford, thuật toán Floyd Warshall được sử dụng để tìm đường đi ngắn nhất giữa tất cả các cặp đỉnh trên đồ thị trong một lần tính toán.

## Ý tưởng
Thuật toán dựa trên tư tưởng của quy hoạch động, thuật toán sử dụng một mảng dp hai chiều để lưu chi phí đường đi giữa hai đỉnh của đồ thị. Với một mảng dp[V][V] với V là số đỉnh của đồ thị, ta có dp[i][j] là đường đi có tổng trọng số nhỏ nhất giữa hai đỉnh i và j.

Ban đầu tất cả các giá trị trên mảng dp đều có giá trị ∞. Thuật toán sẽ thực hiện các vòng lặp liên tục. Ở mỗi bước thuật toán sẽ chọn một đỉnh và lấy đỉnh này làm trung gian để tính đường đi ngắn nhất của hai đỉnh khác. Ví dụ như có một đường đi ngắn nhất từ 0→4 như sau: 0→1→2→3→4. Vậy việc tính đường đi ngắn nhất từ 0→4 hoàn toàn có thể được chia thành tính đường đi ngắn nhất từ 0→2 sau đó cộng với đường đi ngắn nhất từ 2→4. Tương tự thế đường đi ngắn nhất từ 0→2 và 2→4 lại tiếp tực được phân hoạch thành những đường đi ngắn nhất khác đơn giản hơn và tối ưu hơn.


## Độ phức tạp: O($n^3$)

## Cài đặt: [Floyd Warshall](src/FloydWarshall.cpp)
