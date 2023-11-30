# Dijsktra
Thuật toán Dijkstra được dùng để giải quyết bài toán đường đi ngắn nhất từ một đỉnh đến các đỉnh khác trên đồ thị, tuy nhiên thuật toán chỉ hoạt động trên đồ thị có trọng số không âm.

## Bài toán 
Cho một đồ thị có hướng với N đỉnh (được đánh số từ 0 đến N−1), M cạnh có hướng, có trọng số không âm, và một đỉnh nguồn S. Trọng số của tất cả các cạnh đều không âm. 
Yêu cầu tìm ra đường đi ngắn nhất từ đỉnh S tới tất cả các đỉnh còn lại (hoặc cho biết nếu không có đường đi).

Ví dụ:

![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/381cd8e1-5313-4fcb-ab15-d320da1d31e7)

Tìm đường đi ngắn nhất từ đỉnh 1 đến các đỉnh còn lại
## Ý tưởng
Dựa trên tư tưởng tham lam, thuật toán Dijkstra tìm đường đi bằng cách chọn cạnh có trọng số nhỏ nhất từ một tập cạnh kề.

Bắt đầu từ đỉnh 1, chúng ta xét các đỉnh kề đỉnh 1

![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/a8a24bea-2797-4ec7-b65c-3a7b3c935e60)

Ở đây chúng ta sẽ chọn cạnh (1,5) vì chi phí là bé nhất, vậy đường đi ngắn nhất từ đỉnh 1 đến 5 có chi phí là 1. Tiếp theo ở đỉnh 5 chúng ta tiếp tụ xét các đỉnh kề mà chưa tới thăm của đỉnh 5 với các đỉnh từ bước trước. Vì chi có đỉnh 2 nên ta chọn đỉnh này và đường đi ngắn nhất từ 1 đến 2 là 1+2=3.

![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/1dc6dcb0-080b-4107-a1ae-c71ca234bd01)

Tiếp tục thực hiện quá trình cho đến khi đã thăm tất cả các đỉnh

![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/c32c31d4-47f9-4d29-ad94-7c27ef9574ad)

## Phân tích

## Cài đặt
Dưới đây là cách cài đặt cơ bản cho thuật toán:

```cpp
int n; // Số lượng đỉnh
vector<pair<int, int>> adj[N]; // Danh sách kề

void dijkstra(int start, vector<int>& distance) {
    vector<bool> processed(n, false);
    distance[start] = 0;

    for (int i = 0; i < n; i++) {
        int minDist = INF, minVertex = -1;

        for (int j = 0; j < n; j++) {
            if (!processed[j] && distance[j] < minDist) {
                minDist = distance[j];
                minVertex = j;
            }
        }

        if (minVertex == -1) {
            break; // Không còn đỉnh nào có thể đến được
        }

        processed[minVertex] = true;

        for (auto edge : adj[minVertex]) {
            int neighbor = edge.first;
            int weight = edge.second;

            if (!processed[neighbor] && distance[minVertex] + weight < distance[neighbor]) {
                distance[neighbor] = distance[minVertex] + weight;
            }
        }
    }
}
```
Thuật toán có thể được cải tiến sử dụng thêm Priority Queue:
```cpp
void dijkstra(int start, vector<int>& distance) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    distance[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_vertex = pq.top().second;
        pq.pop();

        if (current_dist > distance[current_vertex]) {
            continue;
        }

        for (auto edge : adj[current_vertex]) {
            int neighbor = edge.first;
            int weight = edge.second;
            int new_dist = current_dist + weight;

            if (new_dist < distance[neighbor]) {
                distance[neighbor] = new_dist;
                pq.push({new_dist, neighbor});
            }
        }
    }
}
```

Cách cài đặt ban đầu có độ phức tạp O($V^2$), nơi V là số đỉnh, trong khi cách cài đặt sau chi có độ phức tạp O(E * log(V)), trong đó E là số cạnh (edges) và V là số đỉnh (vertices) trong đồ thị.
